# Program that gets three numbers and prints them inorder of decrement.
def input_numbers(number1 = None , number2 = None , number3 = None):
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
    return number1, number2, number3


def sort_numbers(a = None , b = None , c = None):
    nums = input_numbers(a , b , c)
    if nums[0] <= nums[1] <= nums[2]:
        sorted_nums = nums[0], nums[1], nums[2]
    elif nums[0] <= nums[2] <= nums[1]:
        sorted_nums = nums[0] , nums[2] , nums[1]
    elif nums[1] <= nums[0] <= nums[2]:
        sorted_nums = nums[1] , nums[0] , nums[2]
    elif nums[1] <= nums[2] <= nums[0]:
        sorted_nums = nums[1] , nums[2] , nums[0]
    elif nums[2] <= nums[0] <= nums[1]:
        sorted_nums = nums[2] , nums[0] , nums[1]
    else:
        sorted_nums = nums[2], nums[1], nums[0]
    print(sorted_nums)


def main():
        sort_numbers()
        sort_numbers(3 , 5 , 7)
        sort_numbers(None , 8 , 9)
        sort_numbers(6, None, 9)
        sort_numbers(4, 8, None)
        sort_numbers(None , None , 45)
        sort_numbers(37 , None , None)
        sort_numbers(None , 89 , None)
        sort_numbers(None , None , None)
        sort_numbers(100 , 200 , 150)
        a = [61 , 75 , 83 , 97]
        b = [21 , 37 , 48 , 52]
        c = [60 , 79 , 88 , 96]
        for i in (a):
            for j in (b):
                for k in (c):
                    sort_numbers(i , j , k)


if __name__ == '__main__':
    main()