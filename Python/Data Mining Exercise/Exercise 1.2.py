#Program that gets a string and an integer and prints the string
#several times according to the integer count.
def main():
    f = open("Exercise 1.2.txt" , "r")
    lines = f.readlines()
    for line in lines:
        a , b = line.split(',')
        b = int(b)
        for i in range(b):
            print(i + 1 , '.' , a)
    f.close()
if __name__ == '__main__': main()