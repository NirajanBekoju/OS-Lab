#!/bin/sh
a=0
b=1
echo "Enter n for series : "
read n

count=0

echo "Printing the fibonacci series"

while [ $count -lt $n ]
do
	echo -n "$a "
	count=`expr $count + 1`
	c=`expr $a + $b`
	a=$b
	b=$c
done
echo " "
