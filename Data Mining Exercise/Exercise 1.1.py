#Program that gets a string and an integer and prints the string
#several times according to the integer count.
def printXtimes(a = '' , b = int()):
    for i in range(b):
        print(i + 1 , '.' , a)

if __name__ == '__main__':
    printXtimes('Hossein' , 200)
    printXtimes('Reza' , 60)
    printXtimes('Mahdi' , 50)
    printXtimes('Ali' , 110)
    printXtimes('Hassan' , 400)
    printXtimes('Mohammad' , 95)
    printXtimes('Salman' , 80)
    printXtimes('Abbas' , 150)
    printXtimes('Hadi' , 170)