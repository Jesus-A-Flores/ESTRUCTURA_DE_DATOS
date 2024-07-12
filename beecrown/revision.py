while True:
    n,m = input().split()
    if n == '0' and m == '0':
        break
    res = '0'
    for i in m:
        if i == n:
            continue
        else:
            res += i
    print(f"{int(res)}")