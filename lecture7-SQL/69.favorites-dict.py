import csv

with open("favorites.csv", "r") as file:

    reader = csv.DictReader(file) # processes each row as a dictionary
    # initialize a counter for every laguages, to see in the end which one gets more
    scratch, c, python = 0, 0, 0
    for row in reader: # give me the first line in the file ++
        print(row)
        # here the header becomes the key in the key:value pairs
        '''
        {'timestamp': '2023-03-26', 'programming_language': 'scratch', 'problem': 'bulbs'}
        {'timestamp': '2023-07-260, 'programming_language': 'python', 'problem': 'dma'}
         ...
        '''
        # to print only the data from the programming_language column
        favorite = row["programming_language"] # stores the value of the column with the name "programming_language"
        print(favorite)
        '''
        C
        python
        python
        scratch...

        '''
        if favorite == "C":
            c += 1
        elif favorite == "python":
            python += 1
        elif favorite == "scratch":
            scratch += 1

print(f"C: {c}")
print(f"python: {python}")
print(f"scratch: {scratch}")

'''
c: 57
python: 75
scratch: 68

'''
