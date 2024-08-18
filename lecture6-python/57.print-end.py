for i in range(4):
    print("?", end = "") # end overrides the \n implicit in print so we can print a row of "?"
    # ????
print()
print("hello ", end = "world")
print()

# a most simple form to repeat something with print:
print("?" * 4)
# ????

for i in range(3):
    for j in range(3):
        print("#", end="")
    print()
'''

###
###
###

'''

for i in range(3):
    print("@" * 3)
'''
@@@
@@@
@@@
'''


