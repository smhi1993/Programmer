# Program that gets two numbers and prints the greater one.
def greater_number(number1 = None , number2 = None):
    if number1 is not None and number2 is not None:
        if number1 > number2:
            print('Number' , number1 , 'is Greater!')
        elif number2 > number1:
            print('Number', number2, 'is Greater!')
        else:
            print('Both Numbers are equal!')
    elif number1 is None and number2 is not None:
        number1 = int(input('Enter a Number:\n'))
        if number1 > number2:
            print('Number' , number1 , 'is Greater!')
        elif number2 > number1:
            print('Number', number2, 'is Greater!')
        else:
            print('Both Numbers are equal!')
    elif number1 is not None and number2 is None:
        number2 = int(input('Enter a Number:\n'))
        if number1 > number2:
            print('Number', number1, 'is Greater!')
        elif number2 > number1:
            print('Number', number2, 'is Greater!')
        else:
            print('Both Numbers are equal!')
    else:
        number1 = int(input('Enter a Number:\n'))
        number2 = int(input('Enter a Number:\n'))
        if number1 > number2:
            print('Number', number1, 'is Greater!')
        elif number2 > number1:
            print('Number', number2, 'is Greater!')
        else:
            print('Both Numbers are equal!')


if __name__ == '__main__':
    greater_number()
    greater_number(4)
    greater_number(18)
    greater_number(None , 49)
    greater_number(None , 80)
    greater_number(100 , 150)
    greater_number(47 , 98)
    for i in range(20):
        greater_number((3 * i) + 1 , (5 * i ** 2) - (2 * i) + 1)
        greater_number((5 * i ** 2) , (2 * i) + 1)