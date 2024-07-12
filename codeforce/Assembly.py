for _ in range(int(input())):
    n = int(input())
    ls = list(map(int,input().split()))
    a = []
    j = 0
    d = k = 1
    if len(ls) == 1:
        a.append(ls[j]+1)
        a.append(ls[j])
    else:
        while len(a) <= n and j < n-1:
            if len(a) == 0:
                m = d*k + ls[j]
                a.append(m)
                d,k= m,m 
            else:
                band = False
                for i in range(10**9):
                    if i >= k:
                        if i%d == ls[j]:
                            a.append(i)
                            d = i
                            band = True
                            break
                if band:
                    j+=1
    print(*a)