# this program orders the results to see which programming language is the most popular
# regardless of how many languages are in the csv file.

import csv

with open("favorites.csv", "r") as file:
    reader = csv.DictReader(file)
    counts = {} # counts = dict()
    for row in reader:
        favorite = row["problem"]
        if favorite in counts:
            counts[favorite] += 1
        else:
            counts[favorite] = 1

for favorite in sorted(counts, key=lambda problem: counts[problem], reverse=True):
    print(f"{favorite}: {counts[favorite]}")

    '''
    dna: 81
    filter: 67
    bulbs: 52

    '''
