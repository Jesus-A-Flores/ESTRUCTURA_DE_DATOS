from mpmath import mp #libreria necesaria para la cantidad de terminos de pi

decimales = int(input()) #entrada de la cantidad de decimales que realizara la precision

mp.dps = decimales # a partir de la libreria

valor_pi = str(mp.pi) #almacena el valor pi en un string

valor_pi=valor_pi.replace('.','') #reemplaza el punto decimal
#print(valor_pi)
val_ini,val_fin = 0,17
cont,x = 0,1
print("==MUESTRA EL RESULTADO==")
for i in range(10):
    if cont < 4 :
        for j in range(2*(i+1)):
            print(end=' ')
        print(valor_pi[val_ini:val_fin])
        val_ini = val_fin
        val_fin = (17-i-1)*(2+i)
    else:
        val_fin = val_ini+2*x
        print(valor_pi[val_ini:val_fin],end='')
        for j in range(8):
            print(end=' ')
        val_ini = val_fin
        val_fin = val_fin+(11-2*x)
        print(valor_pi[val_ini:val_fin])
        val_ini = val_fin
        x+=1 
    cont+=1