import glob
import os
import zipfile

dirpath = os.getcwd()


for folder in glob.glob("*.cbr", recursive=True):
   o_path = dirpath + "/" + folder
   n_path = folder.replace('.cbr', '.zip')
   os.rename(o_path, n_path)

for folder in glob.glob("*.CBR", recursive=True):
   o_path = dirpath + "/" + folder
   n_path = folder.replace('.CBR', '.zip')
   os.rename(o_path, n_path)

for folder in glob.glob('*.cbz', recursive=True):
    o_path = dirpath + "/" + folder
    n_path = folder.replace('.cbz', '.zip')
    os.rename(o_path, n_path)

#for folder in glob.glob("*.zip"):
#    zip_location = os.path.abspath(folder)
 #   zip_ref = zipfile.ZipFile(zip_location, 'r')
  #  zip_ref.extractall(dirpath)
   # zip_ref.close()
    #os.remove(zip_location)
    #print(zip_location)
