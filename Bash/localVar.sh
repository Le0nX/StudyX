#!/bin/bash

samp_text="glob var"

func() {
	local samp_text="local var"
	echo "func is executing"
	echo $samp_text
}

echo "script is starting"
echo $samp_text

func

echo "script is ending"
echo $samp_text

exit 0