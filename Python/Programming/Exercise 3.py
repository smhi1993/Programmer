#A program that gets a mark and prints good if it's greater than 17.
def markStatus(a):
    if not a == False:
        if 20 >= a > 17:
            print('Mark', a , 'is Good!')
    else:
        a = input('Enter a number:\n')
        a = int(a)
        if 20 >= a > 17:
            print('Mark', a , 'is Good!')

if __name__ == '__main__':
    markStatus(4)
    markStatus(18)
    for i in range(20):
        markStatus(i + 1)