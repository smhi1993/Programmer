#A program that gets two numbers and prints their sum.
def sum2nums(a , b):
    if not (a , b) == False:
        c = a + b
    else:
        a = input('Enter a number:\n')
        a = int(a)
        b = input('Enter a number:\n')
        b = int(b)
        c = a + b
    print(c)

if __name__ == '__main__':
    sum2nums(4 , 8)
    sum2nums(8 , 7)
    for i in range(100):
        sum2nums(i + 1 , 2 * i)