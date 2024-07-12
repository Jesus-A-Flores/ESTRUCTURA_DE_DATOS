import numpy as np
import matplotlib.pyplot as plt
from scipy.stats import norm

#media
mu = 0
#desciacion estandar
sigma = 1
#genera los valores de x
x = np.linspace(mu-4*sigma,mu +4*sigma,1000)
#valores de y en funcion de x
y = norm.pdf(x,mu,sigma)

#crea la grafica
plt.figure(figsize=(8,6))
plt.plot(x,y,label=f'Distribucion normal\n$\mu={mu}$,$\sigma={sigma}$',color = 'blue')
plt.fill_between(x,y,alpha=0.2,color='blue')
#Agregar titulos y etiqueta
plt.title('Distribucion Normal')
plt.xlabel('funcion de x')
plt.ylabel('funcion de y')
plt.legend(loc = 'best') #agrega la leyenda a la grafica
plt.grid(True) #mostrar las cuadricula
plt.show()#mostrar la grafica