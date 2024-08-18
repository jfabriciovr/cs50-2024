# this program orders the results to see which programming language is the most popular
# regardless of how many languages are in the csv file.

import csv

with open("favorites.csv", "r") as file:
    reader = csv.DictReader(file)
    counts = {} # counts = dict()
    for row in reader:
        favorite = row["programming_language"]
        if favorite in counts: # if the favorite key is in counts dictionary
            counts[favorite] += 1 # increment the value or count of that language
            '''
                count = {
                    'python': 2 or 3 or 4, etc
                }
            '''
        else: # since the dictionary is empty at first, if the language does not exist in the dict, we create it with the value of 1
            counts[favorite] = 1 # initialize a new key with the value 1
            '''
                count = {
                    'python': 1
                }
            '''
print("Unordered result")
for favorite in counts: #iterates through the keys of the counts dictionary
    print(f"{favorite}: {counts[favorite]}")

print()
# we iterate through the sorted counts dictionary and print it
# sorts the dict by key (alphabetically by the name of the language) and then loops and prints each one
print("oredered result")
for favorite in sorted(counts, reverse=True):
    print(f"{favorite}: {counts[favorite]}")

    ''' ordered alphabetically by the "key" and reversed to have it in descendent order

    scratch: 68
    python: 75
    C: 57

    '''
print()

# to sort the result by value instead of keys
print("orederd by ascending value")
for favorite in sorted(counts, key=counts.get): # get is a method that extracts the value of a key
    print(f"{favorite}: {counts[favorite]}")

print()

print("ordered by descending value")
for favorite in sorted(counts, key=counts.get, reverse=True):
    print(f"{favorite}: {counts[favorite]}")


print()
# but what we want is the top 3 in order of the value, not the key
# sorting the results by value to see the top 3
print("Top 3")

def get_value(language): # create a function to pass it to the sorted func
    return counts[language] # returns the value or count of the language

for favorite in sorted(counts, key=get_value, reverse=True): # the function "sorted" can accept a parameter where we specify that we want to order by the value, not the key of the count dictionary, and finaly reverse it so we can see it in descendent order
    print(f"{favorite}: {counts[favorite]}")
    ''' ordered by the value and reversed to have it in descendent order

    python: 75
    scratch: 68
    C: 57

    '''
    # to do the same as the last one but without having to create a function
    # we can use a lambda function, a function with no name

    # for favorite in sorted(counts, key = lambda language: counts[language], reverse = True)
