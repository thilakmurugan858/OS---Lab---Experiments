#!/bin/bash

echo "C-SCAN Disk Scheduling Demonstration"

requests=(98 183 37 122 14 124 65 67)
head=53
diskSize=200

echo "Request Queue: ${requests[@]}"
echo "Initial Head Position: $head"
echo "Disk Size: $diskSize"
echo "C-SCAN Algorithm Executed"