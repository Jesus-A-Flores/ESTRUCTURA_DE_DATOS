for _ in range(int(input())):
    s = input()
    c = s[:len(s)//2]
    cr = s[len(s)//2:len(s)]
    print(f"{c[::-1]}{(cr[::-1])}")