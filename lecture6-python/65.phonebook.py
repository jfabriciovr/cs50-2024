import csv

file = open("phonebook.csv", "a")

name = input("Name: ")
number = input("Number: ")

writer = csv.writer(file)
writer.writerow([name, number])

file.close()

# another way to manipulate the file without needing to manually
# close the file is:

with open("phonebook.csv", "a") as file:
    name = input("Name: ")
    number = input("Number: ")

    writer = csv.writer(file)
    writer.writerow([name, number])

    '''
    # using a dictionary writer, we can put the columns in the order we want

    writer.csv.DictWriter(file, fieldnames = ["name", "number"])
    writer.writerow({"name": name, "number": number})

    '''
