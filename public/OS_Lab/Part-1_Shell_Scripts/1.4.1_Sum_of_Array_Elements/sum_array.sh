#!/bin/bash
read -p "Enter N: " n
echo "enter $n elements"
sum=0

for ((i=0; i<n; i++))
do
     read a[$i]
done

echo -n "Array is:"
for ((i=0; i<n; i++))
do
     echo -n " ${a[$i]}"
     sum=$((sum + a[i]))
done
echo
echo "sum = $sum"