#!/bin/bash
read -p "Enter N: " n
echo "Sum of First $n Numbers is:"
i=1
sum=0

while [ $i -le $n ]
do
     echo -n "$i"
     if [ $i -ne $n ]
     then
          echo -n "+"
     fi
     sum=$((sum + i))
     i=$((i + 1))
done
echo " = $sum"