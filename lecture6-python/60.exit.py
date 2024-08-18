# Recieving command-line arguments
# when running the program

import sys

if len(sys.argv) != 2:
    print("Missing command-line argument")
    sys.exit(1)

print(f"Hello, {sys.argv[1]}")
sys.exit(0)

# python 60.exit.py
# Missing command-line argument

# python 60.exit.py David
# Hello, David

