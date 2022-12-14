t = int(input())

for x in range(t):
    n = int(input())
    t = t-1

    fact = 1
    i = 1
    while (n > 0):
        fact = fact*n      
        n = n-1
    print(fact)