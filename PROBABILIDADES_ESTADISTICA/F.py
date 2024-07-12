from scipy.stats import f
from scipy.special import betainc

# Definir los grados de libertad
d1 = 2
d2 = 2

# Definir el valor de x
x = 6

# Calcular P(X <= x)
p = f.cdf(x, d1, d2)

# Imprimir el resultado
print("P(X <= 6) =", p)
