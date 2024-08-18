people = {
    "Carter": "+1-654-342-2222",
    "David": "+1-454-435-1000"
}

name = input("Name: ") # David

'''
if name in people:
    number = people[name]
    print(f"Number: {number}") # +1-454-435-1000
'''
# or in a shorter version
if name in people:
    print(f"Number: {people[name]}") # +1-454-435-1000

'''
people[name] is a similar way to index as an array
but instead of numbers (people[0]), we can use strings as indexes.


'''
