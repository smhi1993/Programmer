# Program that gets a mark and prints it's status.
def markStatus(a = None):
    if a is not None:
        if a > 20:
            print('Error Value!')
        elif 20 >= a > 17:
            print('Mark' , a , 'is Good!')
        elif 17 >= a > 14:
            print('Mark' , a , 'is OK!')
        elif 14 >= a >= 10:
            print('Mark' , a , 'is passed!')
        else:
            print('Mark' , a , 'is not passed!')
    else:
        a = int(input('Enter a number:\n'))
        if a > 20:
            print('Error Value!')
        elif 20 >= a > 17:
            print('Mark' , a , 'is Good!')
        elif 17 >= a > 14:
            print('Mark' , a , 'is OK!')
        elif 14 >= a >= 10:
            print('Mark' , a , 'is passed!')
        else:
            print('Mark' , a , 'is not passed!')


if __name__ == '__main__':
    markStatus()
    markStatus(4)
    markStatus(18)
    markStatus(49)
    for i in range(20):
        markStatus(i + 1)