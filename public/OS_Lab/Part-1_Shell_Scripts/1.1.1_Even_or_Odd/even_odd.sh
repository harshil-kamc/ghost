#!/bin/bash
echo "Shell script to find even or odd"
read -p "Enter a number: " a

if [ $((a % 2)) -eq 0 ]
then
     echo "$a is an even number"
else
     echo "$a is an odd number"
fi