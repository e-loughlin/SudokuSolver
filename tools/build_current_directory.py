
# Author: Evan Loughlin
# Date: 2019/10/19
#
# Script for building current directory, and running tests.
# Use option "--notb" or "--notests" to not run tests.

import argparse
from pathlib import Path
import os

def stringToBool(v):
    if isinstance(v, bool):
       return v
    if v.lower() in ('yes', 'true', 't', 'y', '1'):
        return True
    elif v.lower() in ('no', 'false', 'f', 'n', '0'):
        return False
    else:
        raise argparse.ArgumentTypeError('Boolean value expected.')

argumentParser = argparse.ArgumentParser(description='Build settings.')
argumentParser.add_argument('--notests', dest='notests', type=stringToBool, nargs='?', const=True, default=False, help="Disables building tests.")
argumentParser.add_argument('--notb', dest='notb', type=stringToBool, nargs='?', const=True, default=False, help="Disables building tests.")

def run_tests():
    # Get same directory as current, but within /build
    cwd = os.getcwd()
    buildCwd = cwd.replace("/src", "/build/src")

    # Recursively search for and run test executables
    for filename in Path(buildCwd).glob("**/*"):
        if os.path.basename(filename) == "run_tests":
            os.system(filename)

def build():
    # Get same directory as current, but within /build
    cwd = os.getcwd()
    buildCwd = cwd.replace("/src", "/build/src")
    
    os.system("cd {0} && make -b && cd {1}".format(buildCwd, cwd))

def cwd_in_src():
    return ("build/src" not in os.getcwd()) and ("/src" in os.getcwd()) 

def main():
    if not cwd_in_src():
        print("Build script can only be run within source directory (source).")
        exit()

    # Build recursively
    build()

    # Run all tests
    args = argumentParser.parse_args()
    if(not args.notests and not args.notb):
        run_tests()

if __name__ == "__main__":
    main()
