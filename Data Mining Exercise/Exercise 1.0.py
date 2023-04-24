#Program that gets a string and an integer and prints the string
#several times according to the integer count.
def main():
    cond = 1
    while(cond):
        a = input('Enter a string:\n')
        a = str(a)
        b = input('Enter a number:\n')
        b = int(b)
        for i in range(b):
            print(i + 1 , '.' , a)
        cond = input('Enter a number(0:Exit , 1:Continue):\n')
        cond = int(cond)
if __name__ == '__main__': main()