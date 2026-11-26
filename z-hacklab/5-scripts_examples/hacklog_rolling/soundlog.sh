#!/bin/bash
exec 2> /dev/null
clear;
while :
do
	var=$(cat test.txt)
	for (( i=0; i<${#var}; i++ ));
 	do
		echo -ne "${var:$i:1}"
		if [ "${var:$i:1}" = " " ]
		then 
			#echo "HHH"
			pitch=$((800 + (RANDOM % 2) * 100))
		else
			pitch=$((2000 + (RANDOM % 2) * 1000))			
			( speaker-test -t sine -f $pitch >/dev/null )& pid=$! 
			sleep 0.0$((1 + RANDOM%3))
			kill -9 $pid 
			sleep 0.0$((1 + RANDOM%8))
		fi
	done
	echo ""
	sleep 2s
done

