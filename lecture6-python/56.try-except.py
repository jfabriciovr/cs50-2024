'''
def main():
    height = get_height()
    drawBricks(height)

def get_height():
    while True:
        try:
            n = int(input("Height: "))
            if n > 0:
                return n
        except ValueError:
            print("not an integer")

def drawBricks(h):
    for i in range (h):
        print("#")


main()

'''
while True:
    try:
        n = int(input("height: "))
    except ValueError:
        print("not an integer")
    else:
        print("that was an integer")
        break
    finally:
        print("test finalized")


