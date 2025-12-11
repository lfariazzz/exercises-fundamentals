cidades = []
cidades_iniciais = []
for i in range(0,5):
    cidades.append(str(input("Digite o nome da cidade que deseja adicionar: ")))
cidades_iniciais.append(cidades[0])
cidades_iniciais.append(cidades[1])
print(cidades_iniciais)
if "Recife" in cidades:
    print("Recife está presente na lista")
else:
    print("Recife não está presente na lista")
# print(cidades.count("a"))