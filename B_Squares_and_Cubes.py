t = input()
t = int(t)

while t > 0:
    n = input()
    n = int(n)
    t = t-1

    count = 1
    i = 1
    while i < n:
        if((i*i) <= n and (i*i*i) <= n):
            count = count+1
        
        elif((i*i) <= n or (i*i*i) <= n):
            count = count+1
        
        i = i+1
    print(count)

