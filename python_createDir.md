# Pythonでディレクトリを作成する方法


Pythonでディレクトリを作成する方法について、以下にまとめます。


python
import os

dir_path = "./example_dir"
if not os.path.exists(dir_path):
    os.mkdir(dir_path)

このコードは、example_dirという名前のディレクトリが存在しない場合に、カレントディレクトリに新しいディレクトリを作成します。
