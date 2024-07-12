def mcd(a,b):
    while b != 0:
        a, b = b, a % b
    return a

for _ in range(int(input())):
    s = list(map(int,input().split()))
    a,b = s[0],s[1]
    