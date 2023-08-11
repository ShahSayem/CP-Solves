t = int(input())

for i in range(t):
    n = int(input())
    numList = [int(i) for i in input().split()]
    even, odd, mn = 0, 0, 1000000009
    for num in numList:
        mn = min(num, mn)

        if (num%2 == 0):
            even += 1
        else:
            odd += 1
    
    if(even == 0 or odd == 0):
        print("YES")
    elif(mn%2):
        print("YES")
    else :
        print("NO")
        