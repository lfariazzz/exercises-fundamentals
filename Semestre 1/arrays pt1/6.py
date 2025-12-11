numeros = []
for i in range(1,11):
    numeros.append(i)
numeros_repetidos = numeros * 2
numeros_pares = []
for x in numeros_repetidos:
    if x % 2 == 0:
        numeros_pares.append(x)
print(numeros_pares[-2],numeros_pares[-1])