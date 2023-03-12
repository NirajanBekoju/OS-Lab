#!/bin/sh

echo "First parameter : $1"
echo "Second Parameter : $2"

echo "Printin all the input arguments : "
for TOKEN in $*
do
	echo $TOKEN
done
