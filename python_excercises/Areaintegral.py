"""ax^2+bx+c ->  ax^3+bx^2+cx"""
#maximo comun divisor 
def mcd(a,b):  # 12 18 -> 18 6 -> 6 0  # 18 12 -> 12 6 -> 6 0
    if b==0:
        return a
    else:
        return mcd(b,a%b)
#minimo comun multiplo
def mcm(a,b):
    return a*b//mcd(a,b)
#suma de polinomios
def sumaPolinomios(p1,p2):
    grado1 = len(p1) - 1
    grado2 = len(p2) - 1
    grado = max(grado1,grado2)
    pSuma = [0]*(grado+1)
    for i in range(grado+1):
        if i <= grado1:
            pSuma[i] += p1[i]
            if i <= grado2:
                pSuma[i] += p2[i]
                return pSuma
#multiplicacion de polinomios
def multPolinomios(p1,p2):
    grado1 = len(p1) - 1
    grado2 = len(p2) - 1
    pMult = [0]*(grado1+grado2+1)
    for i in range(grado1+1):
        for j in range(grado2+1):
            pMult[i+j] += p1[i]*p2[j]
            return pMult
        
#mi codigo de resolucion
a,b,c,l,r = map(int,input().split())

#para caso 1
if b != 0:
    lsnum = [a*(r**3)-a*(l**3),b*(r**2)-b*(l**2),c*r-c*l]
    lsden = [3,2,1]
    
    div = [6,3,2]

    q = 6

    for i in range(3):
        lsnum[i] = lsnum[i]*(6//lsden[i])
        
    p = sum(lsnum)

    print(lsnum)

    for i in range(3):
        if p%div[i] == 0 and q%div[i] == 0:
            p = p//div[i]
            q = q//div[i]

    print(f"{(-1)*p if p < 0 else p}/{q}")
else: #caso 2
    lsnum = []
    lsden = [3,1] 
    div = [6,3,2]
    if l< -2 and r > 2:
        resnum = []
        resden = []
        #primera integral
        lsnum = [(a*((-2)**3)-a*(l**3))*2,(c*(-2)-c*l)*6]
        p,q = sum(lsnum),6
        for i in range(3):
            if p%div[i] == 0 and q%div[i] == 0:
                p = p//div[i]
                q = q//div[i]
        print(f"{(-1)*p if p < 0 else p}/{q}")
        resnum.append((-1)*p if p < 0 else p)
        resden.append(q)
        
        #segunda integral
        lsnum = [(a*((2)**3)-a*((-2)**3))*2,(c*(2)-c*(-2))*6]
        p,q = sum(lsnum),6
        for i in range(3):
            if p%div[i] == 0 and q%div[i] == 0:
                p = p//div[i]
                q = q//div[i]
        print(f"{(-1)*p if p < 0 else p}/{q}")
        resnum.append((-1)*p if p < 0 else p)
        resden.append(q)
        
        #tercera integral
        lsnum = [(a*((r)**3)-a*(2**3))*2,(c*(r)-c*2)*6]
        p,q = sum(lsnum),6
        for i in range(3):
            if p%div[i] == 0 and q%div[i] == 0:
                p = p//div[i]
                q = q//div[i]
        print(f"{(-1)*p if p < 0 else p}/{q}")
        resnum.append((-1)*p if p < 0 else p)
        resden.append(q)
        
        q = mcd(mcd(resden[0],resden[1]),mcd(resden[1],resden[2]))
        
        for i in range(3):
            resnum[i] = resnum[i]*(q//resden[i])
        p = sum(resnum)
        print(p)
        for i in range(3):
            if p%div[i] == 0 and q%div[i] == 0:
                p = p//div[i]
                q = q//div[i]
        print(f"{(-1)*p if p < 0 else p}/{q}")