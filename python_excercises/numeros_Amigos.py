#Escribe un programa que determine si dos números son amigables (dos números son amigables si la suma de los divisores propios de cada uno es igual al otro número).

def numeros_amigos(a,b):
    sum_a = sum_b = 0
    for i in range(1,a):
        if a % i == 0:
            sum_a += i
            
    for i in range(1,b):
        if b % i == 0:
            sum_b += i
            
    return sum_a == b and sum_b == a 

a = int(input("Ingrese el primer numero: "))
b = int(input("Ingrese el segundo numero: "))

print("Son amigos" if numeros_amigos(a,b) else "No son amigos")