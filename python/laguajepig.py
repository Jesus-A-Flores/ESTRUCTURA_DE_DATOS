cad = input('->')
band = True
res = ''
aux = ''
for i in range(len(cad)):
    if band:
        aux += cad[i]
        band = False
    else: 
        if cad[i] != ' ':
            res+=cad[i]
        if cad[i] == ' ': 
            res+=aux
            res+='ay'
            if cad[i] == ' ':
                res+=cad[i]
                aux =''
                band = True
        if i == len(cad)-1:
            res+=aux
            res+='ay'
print(res)