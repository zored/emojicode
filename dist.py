import platform
import shutil
import os
import sys
import subprocess

version = "0.6.1"
packages = ["s", "files", "sockets"]

source = sys.argv[1]
dist_name = "Emojicode-{0}-{1}-{2}".format(version, platform.system(),
                                           platform.machine())
path = os.path.abspath(dist_name)


def copy_packages(destination, source):
    for package in packages:
        dir_path = os.path.join(destination, package)
        make_dir(dir_path)
        shutil.copy2(os.path.join(package, "interface.emojii"), dir_path)
        shutil.copy2(os.path.join(package, "lib" + package + ".a"), dir_path)


def make_dir(path):
    if not os.path.exists(path):
        os.makedirs(path)


def copy_header(*args):
    make_dir(os.path.join(path, "include", *args[:-1]))
    shutil.copy2(os.path.join(source, *args),
                 os.path.join(path, "include", *args))

if __name__ == "__main__":
    make_dir(path)

    shutil.copy2(os.path.join(source, "install.sh"), path)
    shutil.copy2(os.path.join("Compiler", "emojicodec"), path)

    copy_header("runtime", "Runtime.h")
    copy_header("s", "Data.h")
    copy_header("s", "String.h")

    dir_path = os.path.join(path, "packages", "runtime")
    make_dir(dir_path)
    shutil.copy2(os.path.join("runtime", "libruntime.a"), dir_path)

    copy_packages(os.path.join(path, "packages"),
                  os.path.join(source, "headers"))

    if len(sys.argv) > 2 and sys.argv[2] == "archive":
        shutil.make_archive(dist_name, "gztar", os.getcwd(), dist_name)
    if len(sys.argv) > 2 and sys.argv[2] == "install":
        bash = "cd " + path + " && yes | " + os.path.join(path, "install.sh")
        subprocess.run(["bash", "-c", bash])
