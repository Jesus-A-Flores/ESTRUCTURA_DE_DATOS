for _ in range(int(input())):
    encrypt = (input())[::-1]
    result = ""
    m = len(encrypt)//2
    for i in encrypt:
        n = ord(i)
        if (n >= 65 and n <= 90) or n>=97 and n<=122:
            result+=chr(n+3)
        else:
            result+=i
    resultr = result[:m]
    for i in range(m,len(encrypt)):
        n = ord(result[i])
        resultr+=chr(n-1)
    print(f"{resultr}")