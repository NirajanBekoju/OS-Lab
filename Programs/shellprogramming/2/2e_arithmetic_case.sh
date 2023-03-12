#!/bin/sh
echo "Enter first number"
read a
echo "Enter second number"
read b

echo "Operation type"
read o

case "$o" in 
	"+") echo "Addition"
	c=`expr $a + $b`
	echo "$a + $b = $c"
	;;

	"-") echo "Subtraction"
	c=`expr $a - $b`
	echo "$a - $b = $c"
	;;

	"/") echo "Divide"
	c=`expr $a / $b`
	echo "$a / $b = $c"
	;;

	"*") echo "Multiply"
	c=`expr $a \* $b`
	echo "$a * $b = $c"
	;;

	"%") echo "Modulo division"
	c=`expr $a % $b`
	echo "$a % $b = $c"
	;;
esac
