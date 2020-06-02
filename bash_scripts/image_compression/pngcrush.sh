#!/bin/bash
for  i in *.png;
do
	pngcrush -reduce -brute $i \pc_${i} && rm -f $i;
done
