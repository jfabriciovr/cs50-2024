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
    # we iterate through the sorted counts dictionary and print it
    # sorts the dict by key (alphabetically by the name of the language) and then loops and prints each one


    for favorite in sorted(counts, reverse=True):
       print(f"{favorite}: {counts[favorite]}")


    ''' ordered alphabetically by the "key" and reversed to have it in descendent order

    scratch: 68
    python: 75
    C: 57

    '''


    # but what we want is the top 3 in order of the value, not the key
    # sorting the results by value to see the top 3
    print("Top 3")

    '''
    def get_value(language): # create a function to pass it to the sorted func
        return counts[language] # returns the value or count of the language
    '''
    # instead of using the function get_value and pass it as an argument to the sorted function,
    # we can use a lambda function equivalent (a function with no name)
for favorite in sorted(counts, key = lambda language: counts[language], reverse=True):
    print(f"{favorite}: {counts[favorite]}")
    ''' ordered by the value and reversed to have it in descendent order

    python: 75
    scratch: 68
    C: 57

    '''
