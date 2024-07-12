#codigo de grafica en dos dimenciones en python
import matplotlib.pyplot as plt  # libreria para graficar
import numpy as np

x = [0,500]   # lista de valores x
y = [0,500]    # lista de valores y
#plt.plot(x,y)     #grafico lineal
plt.grid ()               # agregar grillado
#añadir cuadritos a la grafica anterior
def lineadda(x0,y0,x1,y1):
    dx = x1-x0
    dy = y1-y0
    x = x0
    y = y0
    if abs(dx) > abs(dy):
        paso = abs(dx)
    else:
        paso = abs(dy)
        
    xinc = dx/paso
    yinc = dy/paso
    
    for i in range(0,paso+1):
        plt.plot([x],[-y],'ro',label='punto rojo')
        x += xinc
        y += yinc

lineadda(250,250,50,80)
lineadda(250,250,450,80)
lineadda(50,80,200,150)
lineadda(450,80,300,150)
lineadda(200,150,250,250)
lineadda(300,150,250,250)
lineadda(50,80,40,125)
lineadda(450,80,460,125)
lineadda(40,125,110,250)
lineadda(460,125,390,250)
lineadda(110,250,390,250)
lineadda(250,250,130,230)
lineadda(250,250,370,230)
lineadda(110,250,130,230)
lineadda(390,250,370,230)
lineadda(250,250,180,300)
lineadda(250,250,320,300)
lineadda(250,250,200,320)
lineadda(250,250,300,320)
lineadda(150,250,180,300)
lineadda(350,250,320,300)
lineadda(150,250,100,300)
lineadda(350,250,400,300)
lineadda(100,300,165,275)
lineadda(400,300,335,275)
lineadda(250,250,150,360)
lineadda(250,250,350,360)
lineadda(100,300,150,360)
lineadda(400,300,350,360)
lineadda(200,320,190,365)
lineadda(300,320,310,365)
lineadda(190,365,150,360)
lineadda(310,365,350,360)
lineadda(250,250,250,350)
lineadda(250,250,235,300)
lineadda(250,250,265,300)
lineadda(235,300,250,350)
lineadda(265,300,250,350)
lineadda(190,365,235,300)
lineadda(310,365,265,300)
plt.show()