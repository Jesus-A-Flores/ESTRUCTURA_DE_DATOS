def inversa(A,n,m):
    det = 0
    inv = [[0]*m for i in range(n)]
    #

#programa que realice multiplicacion de de dos matrices A y B con dimesiones 3x3
A = [[1,2,3],[4,5,6],[7,8,9]]
B = [[7,8,9],[4,3,2],[5,2,1]]

suma = 0
x = y = 0
R = [[0]*3 for i in range(3)]

while x < 3:
    for i in range(3):
        suma += A[x][i]*B[i][y] 
    R[x][y] = suma
    y += 1
    if y == 3:
        y = 0
        x += 1
    suma = 0

for i in R:
    print(*i)

print(R)