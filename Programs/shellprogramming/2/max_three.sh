#!/bin/sh
echo "Enter first number"
read a
echo "Enter second number"
read b
echo "Enter third number"
read c

if [ $a -gt $b -a $a -gt $c ]
then
	echo "$a is greater than $b and $c"
elif [ $b -gt $a -a $b -gt $c ]
then
	echo "$b is greater than $a and $c"
elif [ $c -gt $a -a $c -gt $b ]
then
	echo "$c is greater than $a and $b"
else
	echo "All are equal"
fi

