for _ in range(int(input())):
    n = int(input())
    r = input()
    s = ''.join(sorted(set(r)))
    s1 = s[::-1]
    for i in r:
        if i in s:
            print(s1[s.index(i)], end='')
    print()