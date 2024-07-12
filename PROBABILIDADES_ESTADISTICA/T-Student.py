import numpy as np
import matplotlib.pyplot as plt
from scipy.stats import t

# Grados de libertad
nu = 1

# Rango de valores de x
x = np.linspace(-10, 10, 1000)

# Calcular la pdf
pdf = t.pdf(x, nu)

# Graficar la pdf
plt.plot(x, pdf, label='PDF de $t$-Student con 1 grado de libertad')
plt.title('Función de densidad de probabilidad de $t$-Student')
plt.xlabel('Valores de x')
plt.ylabel('Densidad de probabilidad')
plt.legend()
plt.grid(True)
plt.show()