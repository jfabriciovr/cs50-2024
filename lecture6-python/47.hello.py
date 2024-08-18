from cs50 import get_string

print("hello, world")

answer = get_string("What's your name? ")
print("hello " + answer) # contatenation
print("hello", answer)
print(f'hello {answer}') # format print interpolating variables between {curly braces}

# same output with the three lines before:

# hello Fabricio
# hello Fabricio
# hello Fabricio




