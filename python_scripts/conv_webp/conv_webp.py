#!/bin/python

import os
import subprocess

# Current directory
dir_path = os.getcwd()

#
# root provides all path information, files returns actual file name + extension
    for name in files:
        # Combines the file name into the path information for a full file location
        path = root + '/' + name
        print(path)
        if name.endswith('.png') or name.endswith('.jpg'):
            
        else:
            print("No files to convert")
            