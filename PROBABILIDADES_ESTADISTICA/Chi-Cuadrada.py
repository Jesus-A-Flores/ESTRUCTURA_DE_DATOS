import numpy as np
import matplotlib.pyplot as plt
from scipy.stats import chi2

# Grados de libertad
k = 3

# Rango de valores de x
x = np.linspace(0, 10, 1000)

# Calcular la pdf
pdf = chi2.pdf(x, k)

# Graficar la pdf
plt.plot(x, pdf, label='PDF de $\chi^2$ con 3 grados de libertad')
plt.title('Función de densidad de probabilidad de $\chi^2$')
plt.xlabel('Valores de x')
plt.ylabel('Densidad de probabilidad')
plt.legend()
plt.grid(True)
plt.show()