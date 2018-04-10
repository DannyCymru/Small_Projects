#!/bin/bash
for  i in *.png;
do
	convert -strip $i -quality 75 "${i%.png}.jpg" && rm -f $i;
done