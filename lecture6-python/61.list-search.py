import sys

names = ["Bill", "Charlie", "Fred", "George"]

name = input("Name: ")

'''
for n in names: # linear search
    if name == n:
        print("Found")
        sys.exit(0)
'''
if name in names:
    print("found")
    sys.exit(0)


print("not found")
sys.exit(1)
