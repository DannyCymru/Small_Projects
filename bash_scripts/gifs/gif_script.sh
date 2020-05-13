#!/bin/sh

palette="/tmp/palette.png"

filters="fps=13,scale=450:-1:flags=lanczos"

ffmpeg -t 7 -ss 00:16:03 -i $1 -vf "$filters,palettegen" -y $palette
ffmpeg -t 7 -ss 00:16:03 -i $1 -i $palette -lavfi "$filters [x]; [x][1:v] paletteuse" -y $2
