#!/usr/bin/bash
for (( i = 0; i < 20 ; i++ )); do
	echo $(($RANDOM % 40 + 20)) >> test.txt	
done
