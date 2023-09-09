import math
n = int(input())
MOD = 10**9 + 7
listA = list(map(int, input().split()))

lcm = listA[0]
for i in listA:
    lcm = (lcm*i)//math.gcd(lcm, i)

ans = 0
for i in listA:
    ans = (ans + (lcm//i)%MOD)%MOD

print(ans)
