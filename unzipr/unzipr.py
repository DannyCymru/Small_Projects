import os
import zipfile

# Current directory
dir_path = os.getcwd()

# root provides all path information, files returns actual file name + extension
for root, dirs, files in os.walk(dir_path):
    for name in files:
        # Combines the file name into the path information for a full file location
        path = root + '/' + name
        print(path)
        if name.endswith('.zip'):
            zip_location = os.path.abspath(path)
            zip_ref = zipfile.ZipFile(zip_location, 'r')
            # OS path splits the name away from the file extension and path variable
            new_folder = os.path.splitext(zip_location)[0][0:]
            # Creates a new folder in the exact name of the original zip
            os.mkdir(new_folder)
            # extracts all zip contents to the new folder
            zip_ref.extractall(new_folder)
            zip_ref.close()
            # Removes original zip
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
