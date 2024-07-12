billetes = [500,200,100,50,20,10,5]
monedas = [2,1]

cantidad = int(input())

#codigo de desgloce de billete

for i in billetes:
    if cantidad == 0 or cantidad<5:
        break
    if cantidad//i > 0:
        monto_billetes = cantidad//i
        if monto_billetes == 1:
            print(f"{monto_billetes} billete de {i} euros.")
        else:
            print(f"{monto_billetes} billetes de {i} euros.")
        cantidad=cantidad%i

for i in monedas:
    if cantidad == 0:
        break
    if cantidad//i > 0:
        monto_monedas = cantidad//i
        if monto_monedas == 1:
            print(f"{monto_monedas} moneda de {i} euros.")
        else:
            print(f"{monto_monedas} monedas de {i} euros.")
        cantidad=cantidad%i