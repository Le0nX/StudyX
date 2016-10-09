#!/bin/bash

touch file_one
rm -f file_one 

if [ -f file_one ] || echo "hello" || echo " world"
then
	echo "in if"
else
	echo "in else"
fi
exit 0