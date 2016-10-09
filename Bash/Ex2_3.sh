#!/bin/bash

echo "Is it morning? Please answer yes or no."
read answer

if [ $answer = "yes" ]
then 
	echo "Good morninig"
elif [ $answer = "no" ]
then
	echo "Good afternoon"
else
	echo "Wrong answer"
	exit 1
fi
exit 0
