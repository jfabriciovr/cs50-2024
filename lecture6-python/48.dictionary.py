

words = set() # equivalent of a hash table

def check(word):
    if word.lower() in words:
        return True
    else:
        return False

def load(dictionary):
    file = open(dictionary, "r")
    for line in file:
        word = line.rstrip() # gets rid of the new line
        words.add(word)
    close(file)
    return True

def size():
    return len(words)

def unload():
    return True



