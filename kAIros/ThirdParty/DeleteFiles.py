import os
import argparse

def main():
    parser = argparse.ArgumentParser()
    parser.add_argument('file', type=str)

    args = parser.parse_args()
    os.remove(args.file)

if __name__ == '__main__':
    main()