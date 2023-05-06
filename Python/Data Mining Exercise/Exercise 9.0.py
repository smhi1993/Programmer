#Program that gets a list of words and returns the one with maximum length.
def maxstrlen(a=[]):
    c = 1
    while (c != 0):
        b = input('Enter a string:\n')
        b = str(b)
        a += [b]
        c = input('Enter a number:\n')
        c = int(c)
    print('My list is: {}'.format(a))
    for i in a:
        d = len(i)
        e = 0
        f = 0
        if d > e:
            e , f = d , i
        else:
            continue
    print('The string with maximum length is: {}'.format(f))

if __name__ == '__main__':
    maxstrlen(['Shahab'])