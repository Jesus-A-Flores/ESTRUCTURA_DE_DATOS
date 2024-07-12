def isArmstrong(n):
    exp = len(n)
    sum = 0
    for i in range(len(n)):
        sum+=int(n[i])**exp
    if sum == int(n):
        print("Is Armstrong")
    else:
        print("Not is Armstrong")
n = input("Numero: ")
isArmstrong(n)