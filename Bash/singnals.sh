#!/bin/bash

trap 'rm -f myTest.txt' INT
echo creating file myTest.txt
date > myTest.txt

echo "process interrupt..."
while [ -f myTest.txt ]
do
	echo "File exists"
	sleep 1
done

echo "file no longer exists"

trap INT
echo creating file myTest.txt
date > myTest.txt

echo "process interrupt..."
while [ -f myTest.txt ]
do
	echo "File exists"
	sleep 1
done 

echo "we never get here..."
exit 0