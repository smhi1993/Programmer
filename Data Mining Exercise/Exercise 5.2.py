#Program that gets 20 numbers and return the maximum, minimum, and the average of them all.
def main():
    with open("Exercise 5.2.txt" , "r") as f:
        lines = f.readlines()
        for line in lines:
            mylist = []
            for i in line.split(','):
                num = float(i)
                mylist += [num]
            while (len(mylist) < 20):
                print('Add {} more nubmers in your list.'.format(20 - len(mylist)))
                a = input('Enter a number:\n')
                a = float(a)
                mylist += [a]
            print('The maximum is:', max(mylist))
            print('The minimim is:', min(mylist))
            print('The average is:', sum(mylist) / 20)
            print('My list is:', mylist)

if __name__ == '__main__': main()