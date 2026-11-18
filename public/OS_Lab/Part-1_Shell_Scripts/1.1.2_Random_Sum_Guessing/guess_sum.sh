#!/bin/bash
a=$(($RANDOM % 100))
b=$(($RANDOM % 100))
c=$((a + b))

echo -n "$a + $b = ? "
read ans

if [ $c -eq $ans ]
then
     echo "Your Answer is correct"
else
     echo "Your answer is wrong.. Correct answer = $c"
fi