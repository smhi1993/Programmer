#Program that calculates the Fibonacci series.
def fibonacci(n):
    a , b = 1 , 1
    for i in range(n):
        if n == 0:
            print('fibonacci({})='.format(n), a)
        else:
            a , b = b , a + b
    print('fibonacci({})='.format(n), a)

if __name__ == '__main__':
    for i in range(100):
        fibonacci(i)
    fibonacci(1000000) #Answers with delay.