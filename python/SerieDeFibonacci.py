def hola():
    print("hola mundo")
x=0
y=0
z=1
n = int(input('cantidad de terminos de la serie de fibonacci: '))

for i in range(n):
    x = y + z
    y = z
    print(y, end=' ')
    z = x