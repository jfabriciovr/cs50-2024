import csv

with open("favorites.csv", "r") as file:
    #using "with" makes sure thet the file is automatically closed at the end
    # otherwise you can use open and close the file 

    reader = csv.reader(file)# processes each row as a list
    for row in reader:
        print(row) #prints every row as a list
        '''
        ['timestamp', 'programming_language', 'problem']
        ['2023-03-26', 'scratch', 'bulbs']
        ['2023-07-260, 'python', 'dma']

        '''
        favorite = row[1] # store the value in every row but only the second column (index 1)
        print(favorite) # only prints the second column
        '''
         programming_language -> includes the header
         scratch
         python

        '''


