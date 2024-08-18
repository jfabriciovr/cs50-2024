# keep asing for a positive number.
# if input is negative, ask again
while True:
    n = int(input("height: "))
    if n > 0: # if number is positive, break out of the loop and continue with the program
        break
    print("enter x again")

for i in range(n):
    print("#")
