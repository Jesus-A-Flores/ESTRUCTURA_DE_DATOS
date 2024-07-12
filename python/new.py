#codigo de grafica en dos dimenciones en python
import matplotlib.pyplot as plt  # libreria para graficar
import numpy as np
# Genera los valores del eje x
x = np.linspace(-np.pi, np.pi, 100)

# Genera los valores del eje y
y = np.sin(x)
x = [-10,10]   # lista de valores x
y = [10,-10]    # lista de valores y
y = x
plt.plot(x,y)     #grafico lineal
# Establece los límites del eje x
plt.xlim(-np.pi, np.pi)

# Establece los límites del eje y
plt.ylim(-1.1, 1.1)

# Establece las etiquetas del eje x
plt.xticks([-np.pi, -np.pi/2, 0, np.pi/2, np.pi],
           [r'$-\pi$', r'$-\pi/2$', r'$0$', r'$+\pi/2$', r'$+\pi$'])

# Establece las etiquetas del eje y
plt.yticks([-1, 0, +1],
           [r'$-1$', r'$0$', r'$+1$'])
#añadir cuadritos a la grafica anterior
plt.scatter (3,3)      # grafico con puntos
plt.grid ()               # agregar grillado
plt.title ("velocidad con respecto al tiempo")       # titulo del grafico
plt.xlabel("tiempo")         # nombre eje x
plt.ylabel('velocidad')        # nombre eje y
#eje x y y con una linea mas oscura a la grafica anterior
plt.plot([4],[4],'ro',label='punto rojo')
plt.show()
#GRAFICA DEL SENO Y COSENO ENTRE -PI/2 A PI/2