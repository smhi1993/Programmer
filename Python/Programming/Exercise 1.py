#A program that gets a number and multiply it by 3.
def numX3(a = False):
    if not a == False:
        a *= 3
    else:
        a = input('Enter a number:\n')
        a = int(a)
        a *= 3
    print(a)

if __name__ == '__main__':
    numX3()
    numX3(4)
    numX3(8)
    for i in range(100):
        numX3(i + 1)