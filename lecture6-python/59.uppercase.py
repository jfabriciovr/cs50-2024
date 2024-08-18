# versopm 1
before = input("Before: ")
print("After: ", end = "")

# goes through the string character by character
for c in before:
    print(c.upper(), end ="")

print()

# Version 2
before = input("Before: ")
after = before.upper()
print(f"After: {after}")

