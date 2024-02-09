# Program that gets some numbers and prints the square and the cube of them.
def num_list(num = None):
    while num is None:
        num = int(input('Enter a number:\n'))
    for i in range(num):
        print(i + 1 , (i + 1) ** 2 , (i + 1) ** 3)


if __name__ == '__main__':
    num_list()
    num_list(10)
    num_list(20)