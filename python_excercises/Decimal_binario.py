#Definir una funcion que tome como argumento un numero decimal y devuelva su representacion binaria correspondiente
def decimal_a_binario(n):
    binario = ''
    while n > 0:
        binario = f"{n%2}{binario}"
        n//=2
    return binario

print(decimal_a_binario(14))