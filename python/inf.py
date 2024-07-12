palabras = ['inicialite','finally','hello','randint']

#resultado = list(filter(lambda x: len(x) > 5,palabras))

resultado = list(map(lambda x: x.upper(),list(filter(lambda x: len(x) > 5,palabras))))
print(resultado)

res = filter(lambda x: len(x) > 5,palabras)


print(*res)