import shutil
import argparse
import os

def main():
    parser = argparse.ArgumentParser()
    parser.add_argument('file', type=str)
    parser.add_argument('dest', type=str)

    args = parser.parse_args()

    dest_dir = os.path.dirname(os.path.abspath(args.dest))
    if not os.path.exists(dest_dir):
        os.makedirs(dest_dir)

    shutil.copyfile(os.path.abspath(args.file), os.path.abspath(args.dest))

if __name__ == '__main__':
    main()