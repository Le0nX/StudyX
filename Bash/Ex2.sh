#!/bin/bash

var="Hi, there"
echo $var
echo "$var"
echo '$var'
echo \$var

echo Enter some text
read var

echo '$var' is equal to $var
exit 0
