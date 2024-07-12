#Realizar un programa que verifique si una palabra es palindrama

palabra = input("Ingrese la palabra: ")

if palabra == palabra[::-1]:
    print("La palabra es palindroma")
else:
    print("La palabra no es palindroma")
    
