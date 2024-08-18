s = input("Do you agree? ")

# converts to lowercase before comparing
s = s.lower()
# although strings are inmutable, python frees the memory from the
# old string to store the new one


if s in ["y", "yes"]:
    print("Agreed")
elif s in ["n", "no"]:
    print("not agreed")


