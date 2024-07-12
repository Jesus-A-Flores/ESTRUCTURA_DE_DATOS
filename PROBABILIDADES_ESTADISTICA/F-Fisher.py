import numpy as np
import matplotlib.pyplot as plt
from scipy.stats import f

#Grados de libertad
d1 = 5
d2 = 10


x = np.linspace(0.01,10,1000)


y = f.pdf(x,d1,d2)


plt.figure(figsize=(8,6))
plt.plot(x,y,label = f'Distribucion F\n(df_n={d1},df_d={d2})')
plt.legend()
plt.grid(True)
plt.show()