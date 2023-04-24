#Program that gets a 4*4 matrix and return the maximum number of each row.
def main():
    a = []
    b = []
    c = []
    d = []
    for i in range(4):
        n1 = input('Enter a number:\n')
        n1 = float(n1)
        a += [n1]
    for i in range(4):
        n2 = input('Enter a number:\n')
        n2 = float(n2)
        b += [n2]
    for i in range(4):
        n3 = input('Enter a number:\n')
        n3 = float(n3)
        c += [n3]
    for i in range(4):
        n4 = input('Enter a number:\n')
        n4 = float(n4)
        d += [n4]
    matrix = [a , b , c , d]
    print(matrix)
    for i in matrix:
        m = max(i)
        print('Maximum {} is:\n{}'.format(i , m))

if __name__ == '__main__': main()