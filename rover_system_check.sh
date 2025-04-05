#!/bin/bash

#generating random battery percentage

battery=$((RANDOM % 101))
echo "Battery percentage is $battery%"

#checking if the battery percentage is above or below 20
if [[ $battery -lt 20 ]]; then
   echo "Battery low! Return to base!"
   exit 1
fi

#pinging google.com to check network connectivity
ping -c 1 google.com &> /dev/null

if [[ $? -ne 0 ]]; then              #exit code non zero means failure	
   echo "Communication failure!"
   exit 1
fi

#the below statement would run only if the above two checks pass
echo "All systems operational!"
