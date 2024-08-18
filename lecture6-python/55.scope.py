
def main():
    height = get_height()
    for i in range(height):
        print("#")

def get_height():
    while True:
        n = int(input("height: "))
        if n > 0:
            return n
    # in C, "n" wouldn't exist outside the while loop where it was created
    # python is more loose with scope

main()
