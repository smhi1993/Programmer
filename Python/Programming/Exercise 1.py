# Program that gets a number and multiply it by 3.
def numX3(a = None):
    if a is not None:
        a *= 3
    else:
        a = int(input('Enter a number:\n'))
        a *= 3
    print(a)


if __name__ == '__main__':
    numX3()
    numX3(4)
    numX3(8)
    for i in range(100):
        numX3(i + 1)