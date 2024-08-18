'''
scores = [72, 73, 33]

average = sum(scores) / len(scores)
print(f"Average: {average:.3f}")
# 59.333
'''

from cs50 import get_int

scores = [] # creates an empty list
for i in range(3): # loop to receive 3 scores
    score = get_int("Score: ")
    scores.append(score) # adds scores to the list
    # scores += [score]

average = sum(scores) / len(scores)
print(scores)
print(f"Average: {average:0.2f}")

