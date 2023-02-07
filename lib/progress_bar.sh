#!/bin/bash

SUM=$(echo "scale=2; $1 * 100 / $2" | bc)

echo -n "[$SUM%]"
echo -n " Progress: "

for i in {1..25}
do
    if [ $i -le $(echo "scale=0; (($SUM * 25 / 100) )" | bc) ]
    then
        echo -n "#"
    else
        echo -n "-"
    fi
done

echo -ne "\r"
