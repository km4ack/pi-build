#!/usr/bin/env ruby

require 'gpsd_client'
require 'maidenhead'
require 'socket'
require 'json'

ft8call_port = 2237

options = {:host => ARGV[0] ||= ENV["HOST"], :port => ARGV[1] ||= ENV["PORT"] }

gpsd = GpsdClient::Gpsd.new(options)
gpsd.start()
apicmd = {}

# get maidenhead if gps is ready
if gpsd.started?
  pos = gpsd.get_position
  maid = Maidenhead.to_maidenhead(pos[:lat], pos[:lon], precision = 5)
#  puts "lat = #{pos[:lat]}, lon = #{pos[:lon]}, grid = #{maid}"
  apicmd = {:type => "STATION.SET_GRID", :value => maid}
end

puts "#{maid}"

