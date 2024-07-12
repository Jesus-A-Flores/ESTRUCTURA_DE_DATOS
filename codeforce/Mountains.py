cadena = input()
pos = ant = 0
posmay = aux = 0
for i in cadena:
    if i == '+':
        pos += 1
        ant += 1
    elif i == '-':
        aux = ant
        pos += 1
        ant -= 1
    if ant > aux:
        posmay = pos
print(posmay)