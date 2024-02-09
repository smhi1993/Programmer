# Program that gets two numbers a , b and prints a - b if a > b , else b - a.
def subtruct(a = None , b = None):
    if a is not None and b is not None:
        if a > b:
            c = a - b
            print(a , '-' , b , '=' , c)
        else:
            c = b - a
            print(b , '-' , a , '=' , c)
    elif a is not None and b is None:
        b = int(input('Enter a number:\n'))
        if a > b:
            c = a - b
            print(a , '-' , b , '=' , c)
        else:
            c = b - a
            print(b , '-' , a , '=' , c)
    elif a is None and b is not None:
        a = int(input('Enter a number:\n'))
        if a > b:
            c = a - b
            print(a , '-' , b , '=' , c)
        else:
            c = b - a
            print(b , '-' , a , '=' , c)
    else:
        a = int(input('Enter a number:\n'))
        b = int(input('Enter a number:\n'))
        if a > b:
            c = a - b
            print(a , '-' , b , '=' , c)
        else:
            c = b - a
            print(b , '-' , a , '=' , c)


if __name__ == '__main__':
    subtruct()
    subtruct(4)
    subtruct(None , 18)
    subtruct(49 , 80)
    subtruct(100 , 47)
    for i in range(20):
        subtruct((3 * i) + 1 , (5 * i) - (i / 2) + 1)