import shutil
import argparse
import os

def main():
    parser = argparse.ArgumentParser()
    parser.add_argument('file', type=str)
    parser.add_argument('dest', type=str)

    args = parser.parse_args()
    shutil.copyfile(os.path.abspath(args.file), os.path.abspath(args.dest))

if __name__ == '__main__':
    main()