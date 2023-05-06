#Program that gets a string and returns the repeat count of words.
def main():
    a = set()
    f = open("Exercise 8.2.txt" , "r")
    words = f.read()
    for word in words.split():
        a.add(word)
    for b in a:
        print(b , words.count(b))
    f.close()

if __name__ == '__main__': main()