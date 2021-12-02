/* Taken from https://opensource.com/article/19/5/how-write-good-c-main-function */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <libgen.h>
#include <errno.h>
#include <string.h>
#include <getopt.h>

#define OPTSTR "va:l:h"
#define USAGE_FMT  "%s [-v] [-a latitude] [-l longitude] [-h]"
#define ERR_LAT "lat"
#define ERR_LON  "lon"
#define ERR_DO_GET_GRID "do_get_grid blew up"
#define DEFAULT_PROGNAME "get_grid"

extern int errno;
extern char *optarg;
extern int opterr, optind;

typedef struct {
  int          verbose;
  char         *dst;
  double       lon;
  double       lat;
} options_t;

int dumb_global_variable = -11;
void usage(char *progname, int opt);
int  do_get_grid(options_t *options);
void calcLocator(char *dst, double lat, double lon);

int main(int argc, char *argv[]) {
    int opt;
    options_t options = { 0, 0, 0.0, 0.0 };

    opterr = 0;

    while ((opt = getopt(argc, argv, OPTSTR)) != EOF)
       switch(opt) {
           case 'a':
              if (!(options.lat = strtod(optarg, &optarg) )) {
                 perror(ERR_LAT);
                 exit(EXIT_FAILURE);
                 /* NOTREACHED */
              }
              break;

           case 'l':
              if (!(options.lon = strtod(optarg, &optarg) )) {
                 perror(ERR_LON);
                 exit(EXIT_FAILURE);
                 /* NOTREACHED */
              }    
              break;
             
           case 'v':
              options.verbose += 1;
              break;

           case 'h':
           default:
              usage(basename(argv[0]), opt);
              /* NOTREACHED */
              break;
       }

    if (do_get_grid(&options) != EXIT_SUCCESS) {
       perror(ERR_DO_GET_GRID);
       exit(EXIT_FAILURE);
       /* NOTREACHED */
    }
    fprintf(stdout, "%s", options.dst);
    free(options.dst);
    return EXIT_SUCCESS;
}

void usage(char *progname, int opt) {
   fprintf(stderr, USAGE_FMT, progname ? progname:DEFAULT_PROGNAME);
   exit(EXIT_FAILURE);
   /* NOTREACHED */
}

int do_get_grid(options_t *options) {
  if (!options) {
    errno = EINVAL;
    return EXIT_FAILURE;
  } 
     
  if (!options->lon || !options->lat) {
    errno = ENOENT;
    return EXIT_FAILURE;
  } 

  options->dst = malloc((sizeof(char) * 3) + 1); /* + 1 allows for null string terminator. */

  calcLocator(options->dst, options->lat, options->lon);
  return EXIT_SUCCESS;
}

/* https://ham.stackexchange.com/a/5599 */
void calcLocator(char *dst, double lat, double lon) {
  int o1, o2, o3;
  int a1, a2, a3;
  double remainder;
  // longitude
  remainder = lon + 180.0;
  o1 = (int)(remainder / 20.0);
  remainder = remainder - (double)o1 * 20.0;
  o2 = (int)(remainder / 2.0);
  remainder = remainder - 2.0 * (double)o2;
  o3 = (int)(12.0 * remainder);

  // latitude
  remainder = lat + 90.0;
  a1 = (int)(remainder / 10.0);
  remainder = remainder - (double)a1 * 10.0;
  a2 = (int)(remainder);
  remainder = remainder - (double)a2;
  a3 = (int)(24.0 * remainder);
  dst[0] = (char)o1 + 65;
  dst[1] = (char)a1 + 65;
  dst[2] = (char)o2 + 48;
  dst[3] = (char)a2 + 48;
  dst[4] = (char)o3 + 97;
  dst[5] = (char)a3 + 97;
 /* dst[0] = (char)o1 + 'A';
  dst[1] = (char)a1 + 'A';
  dst[2] = (char)o2 + '0';
  dst[3] = (char)a2 + '0';
  dst[4] = (char)o3 + 'A';
  dst[5] = (char)a3 + 'A';*/
  dst[6] = (char)0;
}
