#!/bin/bash
for  i in *.png;
do
	pngcrush -reduce -brute $i;
done