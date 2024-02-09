# Program that gets two numbers and prints their sum.
def sum2nums(a = None , b = None):
    if a is not None and b is not None:
        c = a + b
    elif a is not None and b is None:
        b = int(input('Enter a number:\n'))
        c = a + b
    elif a is None and b is not None:
        a = int(input('Enter a number:\n'))
        c = a + b
    else:
        a = int(input('Enter a number:\n'))
        b = int(input('Enter a number:\n'))
        c = a + b
    print(c)


if __name__ == '__main__':
    sum2nums()
    sum2nums(4)
    sum2nums(None , 9)
    sum2nums(4 , 8)
    sum2nums(8 , 7)
    for i in range(100):
        sum2nums(i + 1 , 2 * i)