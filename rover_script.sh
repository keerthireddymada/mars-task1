#!/bin/bash
touch log1.txt
touch log2.txt
touch log3.txt
mv log1.txt mission_log.txt
find /home/keerthi/rover_mission -name "*.log"
cat mission_log.txt
grep "ERROR" mission_log.txt
wc -l mission_log.txt
date
top
# sudo shutdown +10

