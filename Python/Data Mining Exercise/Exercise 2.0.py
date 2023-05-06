#Program that gets students number and their average and returns
#the second average between all.
def main():
    first = 3
    fistudnum = 0
    second = 2
    sestudnum = 0
    f = open("Exercise 2.0.txt" , "r")
    lines = f.readlines()
    for line in lines:
        a , b = line.split(',')
        a = int(a)
        b = float(b)
        if b > first:
            first , second = b , first
            fistudnum , sestudnum = a , fistudnum
        elif b > second:
            second = b
            sestudnum = a
    print('Second place is:' , sestudnum , 'with average:' , second)
    print('Maximum average is:' , first , 'for student number:' , fistudnum)
if __name__ == '__main__': main()