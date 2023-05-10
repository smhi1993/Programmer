# A program that gets two numbers a , b and prints a - b if a > b , else b - a.
def subtruct(a = None , b = None):
    if a and b != None:
        if a > b:
            c = a - b
            print(a , '-' , b , '=' , c)
        else:
            c = b - a
            print(b , '-' , a , '=' , c)
    elif a != None and b == None:
        b = input('Enter a number:\n')
        b = int(b)
        if a > b:
            c = a - b
            print(a , '-' , b , '=' , c)
        else:
            c = b - a
            print(b , '-' , a , '=' , c)
    elif a == None and b != None:
        a = input('Enter a number:\n')
        a = int(a)
        if a > b:
            c = a - b
            print(a , '-' , b , '=' , c)
        else:
            c = b - a
            print(b , '-' , a , '=' , c)
    else:
        a = input('Enter a number:\n')
        a = int(a)
        b = input('Enter a number:\n')
        b = int(b)
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