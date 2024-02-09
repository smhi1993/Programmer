# Program that gets three numbers and prints the greater one.
def greater_number(number1 = None , number2 = None , number3 = None):
    if number1 is None or number2 is None or number3 is None:
        if number1 is None and number2 is None and number3 is None:
            number1 = int(input('Enter a Number :\n'))
            number2 = int(input('Enter a Number :\n'))
            number3 = int(input('Enter a Number :\n'))
        elif number1 is None and number2 is None and number3 is not None:
            number1 = int(input('Enter a Number :\n'))
            number2 = int(input('Enter a Number :\n'))
        elif number1 is not None and number2 is None and number3 is None:
            number2 = int(input('Enter a Number :\n'))
            number3 = int(input('Enter a Number :\n'))
        elif number1 is None and number2 is not None and number3 is None:
            number1 = int(input('Enter a Number :\n'))
            number3 = int(input('Enter a Number :\n'))
        elif number1 is None and number2 is not None and number3 is not None:
            number1 = int(input('Enter a Number :\n'))
        elif number1 is not None and number2 is None and number3 is not None:
            number2 = int(input('Enter a Number :\n'))
        else:
            number3 = int(input('Enter a Number :\n'))
    return max(number1, number2, number3)


def maximum_number(a = None , b = None , c = None):
    maximum = greater_number(a , b , c)
    print('Maximum Number is:\n' , maximum)


def main():
        maximum_number()
        maximum_number(3 , 5 , 7)
        maximum_number(None , 8 , 9)
        maximum_number(6, None, 9)
        maximum_number(4, 8, None)
        maximum_number(None , None , 45)
        maximum_number(37 , None , None)
        maximum_number(None , 89 , None)
        maximum_number(None , None , None)
        maximum_number(100 , 200 , 150)
        a = [61 , 75 , 83 , 97]
        b = [21 , 37 , 48 , 52]
        c = [60 , 79 , 88 , 96]
        for i in (a):
            for j in (b):
                for k in (c):
                    maximum_number(i , j , k)


if __name__ == '__main__':
    main()