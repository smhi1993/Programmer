# Program that gets length and width of a rectangle and prints
# its surface and area if the length greater than width.
def rectangle(length = None , width = None):
    if length is not None and width is not None:
        print('Length =' , length)
        print('Width =' , width)
        if length > width:
            surface = length * width
            area = 2 * (length + width)
            print('Surface =' , surface)
            print('Area =' , area)
        else:
            print('Unacceptable rectangle!')
    elif length is not None and width is None:
        width = int(input('Enter rectangle\'s width :\n'))
        print('Length =', length)
        print('Width =', width)
        if length > width:
            surface = length * width
            area = 2 * (length + width)
            print('Surface =' , surface)
            print('Area =' , area)
        else:
            print('Unacceptable rectangle!')
    elif length is None and width is not None:
        length = int(input('Enter rectangle\'s length :\n'))
        print('Length =', length)
        print('Width =', width)
        if length > width:
            surface = length * width
            area = 2 * (length + width)
            print('Surface =' , surface)
            print('Area =' , area)
        else:
            print('Unacceptable rectangle!')
    else:
        length = int(input('Enter rectangle\'s length :\n'))
        width = int(input('Enter rectangle\'s width :\n'))
        print('Length =', length)
        print('Width =', width)
        if length > width:
            surface = length * width
            area = 2 * (length + width)
            print('Surface =' , surface)
            print('Area =' , area)
        else:
            print('Unacceptable rectangle!')


if __name__ == '__main__':
    rectangle()
    rectangle(4)
    rectangle(None , 18)
    rectangle(49 , 80)
    rectangle(100 , 47)
    for i in range(20):
        rectangle((3 * i) + 1 , (5 * i) - (i / 2) + 1)
    for i in range(20):
        rectangle((5 * i) - (i / 2) + 1 , (3 * i) + 1)