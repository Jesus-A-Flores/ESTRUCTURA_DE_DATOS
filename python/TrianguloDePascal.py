n = int(input('Filas: '))

for i in range(n):
    aux = 1
    for j in range(n,i,-1):
        print(end=' ')
    for k in range(i+1):
        if k == 0:
            print(end='|')
        print(int(aux), end='|')
        aux*= (i - k)/(k+1)
    print()
