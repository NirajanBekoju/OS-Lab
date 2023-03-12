#!/bin/sh

echo "enter first string"
read str1
echo "enter second string"
read str2

if [ $str1 = $str2 ] 
then
	echo "strings are equal."
else
	echo "strings are not equal."
fi
