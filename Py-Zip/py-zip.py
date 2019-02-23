import glob
import os
import zipfile

dirpath = os.getcwd()
print(dirpath)
def extension_check(to_check):
    print(os.path.splitext(to_check)[1][1:])

for folder in glob.glob("*.*", recursive=True):
    if extension_check(folder) == '.cbr':
           o_path = dirpath + "/" + folder
           n_path = folder.replace('.cbr', '.rar')
           os.rename(o_path, n_path)

    elif extension_check(folder) == '.CBR':
            o_path = dirpath + "/" + folder
            n_path = folder.replace('.CBR', '.rar')
            os.rename(o_path, n_path)

    elif extension_check(folder) == '.CBZ':
            o_path = dirpath + "/" + folder
            n_path = folder.replace('.cbz', '.zip')
            os.rename(o_path, n_path)

    elif extension_check(folder) == '.zip':
           zip_location = os.path.abspath(folder)
           zip_ref = zipfile.ZipFile(zip_location, 'r')
           new_folder = os.path.splitext(zip_location)[0][0:]
           os.mkdir(new_folder)
           zip_ref.extractall(new_folder)
           zip_ref.close()
           os.remove(zip_location)

    else:
        print("No folders found")
        exit(0)
