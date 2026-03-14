nomes = []
quantidades = []
precos = []
valores_totais = []
for i in range(0,5):
    nomes.append(str(input(f"Digite o {i + 1}o produto: ")))
    quantidades.append(float(input(f"Digite a quantidade desse produto: ")))
    precos.append(float(input(f"Digite o valor de cada um desse produto: ")))
    valores_totais.append(quantidades[i] * precos[i])
maior_produto = valores_totais.index(max(valores_totais))
print(f"Produto com maior valor de estoque = {nomes[maior_produto]}")
print(f"Soma total do estoque = {sum(valores_totais)}")
print(f"Média de preço dos produtoos: {sum(valores_totais)/len(valores_totais)}")