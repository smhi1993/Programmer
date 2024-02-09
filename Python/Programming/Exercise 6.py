# Program that gets a number and prints if the number odd or even.
def odd_even(number = None):
    if number is not None:
        if number % 2 == 1:
            print('Number' , number , 'is Odd!')
        else:
            print('Number' , number , 'is Even!')
    else:
        number = int(input('Enter a number:\n'))
        if number % 2 == 1:
            print('Number' , number , 'is Odd!')
        else:
            print('Number' , number , 'is Even!')


if __name__ == '__main__':
    odd_even()
    odd_even(4)
    odd_even(18)
    odd_even(49)
    odd_even(80)
    odd_even(100)
    odd_even(47)
    for i in range(20):
        odd_even((3 * i) + 1)
        odd_even((5 * i) - (2 * i) + 1)