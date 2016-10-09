#!/bin/bash

echo "Is it morning? Please answer yes or no."
read answer

case "$answer" in
	yes) echo "Good morning";;
	no) echo "Good afternoon";;
	y) echo "Good morning";;
	n) echo "Good afternoon";;
	*) echo "Sorry. Try again";;
esac
exit 0