a = int(input("->"))
b = int(input("->"))
c = int(input("->"))
m = (abs(a+b)+abs(a-b))//2
may = (abs(m+c)+abs(m-c))//2
men = (abs(a+b)-abs(a-b))//2
med = (abs(m+c)-abs(m-c))//2
print("may: ",may)
print("men: ",men)
print("med: ",med)