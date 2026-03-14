numeros = [4,7,2,9,1,6]
verificador = int(input("Confira se um número está na lista: "))
if verificador in numeros:
    print(F"Está na posição {numeros.index(verificador) + 1}")
else:
    numeros.insert(0, verificador)
    print(f"Acaba de ser adicionado: {numeros}")