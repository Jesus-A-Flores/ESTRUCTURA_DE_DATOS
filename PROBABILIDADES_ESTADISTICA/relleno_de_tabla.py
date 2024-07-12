import math
for i in range(-10,10+1):
    #print(f"{i} : {((1/0.875)*((0.5)**(3/2))*((i)**(0.5))*(math.exp(-i/2))):.5f}")
    print(f"{(1/(math.pi*(1+i**2))):.5f}")