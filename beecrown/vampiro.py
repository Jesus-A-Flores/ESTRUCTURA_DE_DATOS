while True:
    s = list(map(int,input().split()))
    a,b = s[0],s[1]
    if a == 0 and a == b:
        break
    vec = [0,0,0,0,0,0,0,0,0,0]
    while a <= b:
        con = 0
        for i in "0123456789":
            if con == len(str(a)):
                break
            if  i in str(a):
                vec[int(i)]+=str(a).count(i)
                con+=1
        a+=1  
    print(' '.join(str(i) for i in vec))