#!/bin/bash
clear;
while :
do
perl -ne '$|=1; for (split //) 
{
 print;
 select(undef,undef,undef, 0.02) 
}' test.txt
sleep 2s
done

