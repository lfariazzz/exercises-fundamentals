nomes =[]
for i in range(0,5):
    nomes.append(str(input("Adicione um nome a lista: ")))
n = int(input("Insira de 0 a 4 qual nome quer remover: "))
nomes.pop(n)
print(nomes)