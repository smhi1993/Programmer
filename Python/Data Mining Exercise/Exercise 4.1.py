#Progarm that reads a string and prints it's characters by a space.
def main():
    with open("Exercise 4.1.txt" , "r") as f:
        lines = f.readlines()
        for line in lines:
            a = line.split(',')
            a = str(a)
            for i in a:
                print(i , end = ' ')

if __name__ == '__main__': main()