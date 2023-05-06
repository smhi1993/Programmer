#Program that opens a text file and print it in the output.
def main():
    with open("Exercise 10.0.txt" , "r") as f:
        lines = f.readlines()
        for line in lines:
            print(line , end = '')

if __name__ == '__main__': main()