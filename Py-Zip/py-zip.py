import glob
import os
from pathlib import Path
import zipfile

dir_path = os.getcwd()

for root, dirs, files in os.walk(dir_path):
    for name in files:
        path = root + '/' + name

        if name.endswith('.zip'):
            zip_location = os.path.abspath(path)
            zip_ref = zipfile.ZipFile(zip_location, 'r')
            new_folder = os.path.splitext(zip_location)[0][0:]
            os.mkdir(new_folder)
            zip_ref.extractall(new_folder)
            zip_ref.close()
            os.remove(zip_location)

        elif name.endswith('.cbr'):
            n_path = path.replace('.cbr', '.rar')
            os.rename(path, n_path)

        elif name.endswith('.CBR'):
            n_path = path.replace('.CBR', '.rar')
            os.rename(path, n_path)

        elif name.endswith('.cbz'):
            n_path = path.replace('.cbz', '.zip')
            os.rename(path, n_path)

        else:
            print("No folders found")
            exit(0)