#Escribe un programa que calcule los primeros n números de la serie de Fibonacci.

#metodo recursivo
def fibonacci(n):
    if n == 0 or n == 1:
        return 1
    return fibonacci(n-2)+fibonacci(n-1)

n = int(input("Numero de terminos: "))

for i in range(n):
    print(fibonacci(i),end=' ')    
print()

#metodo iterativo
x = y = 0
z = 1
for i in range(n):
    x = y + z
    y = z
    z = x
    print(y,end=' ')