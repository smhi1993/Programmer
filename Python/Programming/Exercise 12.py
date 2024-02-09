# Program that gets some numbers and prints the count of evens and odds.
def even_odd_count():
    evens = 0
    odds = 0
    while True:
        num = int(input('Enter a number:\n'))
        if num == 0:
            break
        elif num % 2 == 0:
            evens += 1
            print('Count of Even numbers:' , evens)
            print('Count of Odd numbers:' , odds)
        else:
            odds += 1
            print('Count of Even numbers:', evens)
            print('Count of Odd numbers:', odds)


if __name__ == '__main__':
    even_odd_count()