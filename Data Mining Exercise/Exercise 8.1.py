#Program that gets a string and returns the repeat count of a word in it.
def main():
    with open("Exercise 8.1.txt" , "r") as f:
        a = f.read()
        b = ''
        if len(a) == 0:
            a = input('Enter a string:\n')
            a = str(a)
        elif len(b) == 0:
            b = input('Enter a string you want to know its repeat time:\n')
            b = str(b)
        elif len(a) & len(b) == 0:
            a = input('Enter a string:\n')
            a = str(a)
            b = input('Enter a string you want to know its repeat time:\n')
            b = str(b)
        print('The word {} has repeated {} times in the string.'.format(b , a.count(b)))

if __name__ == '__main__': main()