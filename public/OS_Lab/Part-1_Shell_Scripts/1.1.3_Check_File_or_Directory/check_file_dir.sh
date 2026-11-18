#!/bin/sh
read -p 'Enter a name: ' n

if [ -f "$n" ]
then
     echo 'It is a file'
elif [ -d "$n" ]
then
     echo 'It is a directory'
else
     echo 'Invalid name entered'
fi