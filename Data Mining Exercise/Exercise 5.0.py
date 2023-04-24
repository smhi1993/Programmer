#Program that gets 20 numbers and return the maximum, minimum, and the average of them all.
def main():
    mylist = []
    for i in range(20):
        a = input('Enter a number:\n')
        a = float(a)
        mylist += [a]
    print('The maximum is:' , max(mylist))
    print('The minimim is:' , min(mylist))
    print('The average is:' , sum(mylist)/20)
    print('My list is:' , mylist)

if __name__ == '__main__': main()