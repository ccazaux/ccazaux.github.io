#!/bin/bash
while :
do
pitch=$((2000 + (RANDOM % 4) * 100))
( speaker-test -t sine -f $pitch )& pid=$! 
sleep 0.0$((5 + RANDOM%90))
kill -9 $pid
sleep 0.0$((5 + RANDOM%90))
done

