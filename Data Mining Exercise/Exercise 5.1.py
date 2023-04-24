#Program that gets 20 numbers and return the maximum, minimum, and the average of them all.
def maxminave(mylist = []):
    while(len(mylist) < 20):
        print('Add {} more nubmers in your list.'.format(20 - len(mylist)))
        a = input('Enter a number:\n')
        a = float(a)
        mylist += [a]
    print('The maximum is:', max(mylist))
    print('The minimim is:', min(mylist))
    print('The average is:', sum(mylist) / 20)
    print('My list is:', mylist)

if __name__ == '__main__':
    list1 = [23 , 234 , 64 , 90 , 83 , 684 , 973 , 32 , 58 , 97 , 68 , 361 , 184 , 961 , 974 , 342 , 473 , 963 , 325 ,
             863] #List with 20 numbers.
    list2 = [62 , 46 , 74 , 37 , 96 , 90 , 34 , 57 , 24 , 98 , 224 , 621 , 753 , 865 , 346 ,
             754 , 234] #List with less than 20 numbers.
    maxminave(list1)
    maxminave(list2)