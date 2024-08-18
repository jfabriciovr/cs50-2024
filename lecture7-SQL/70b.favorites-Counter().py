import csv
from collections import Counter


with open("favorites.csv", "r") as file:
    reader = csv.DictReader(file)
    counts = Counter()

    for row in reader:
        favorite = row["programming_language"]
        #favorite = row["problem"]
        counts[favorite] += 1

for favorite in sorted(counts, key=counts.get, reverse=True):
    print(f"{favorite}: {counts[favorite]}")

print()
'''
python: 75
scratch: 68
C: 57
'''
# There is another way using the Counter class, and
# using a method called most_common();

for favorite, count in counts.most_common():
    print(f"{favorite}: {count}")
'''

python: 75
scratch: 68
C: 57

'''
print("With input from the user")
print()
favorite = input("Write your Favorite: ")
print(f"{favorite}: {counts[favorite]}")
# if the user writes "python"
'''

python: 75
'''
