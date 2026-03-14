produtos = ["Arroz", "Feijão", "Macarrão", "Tomate", "Leite"]
while True:
    print(produtos)
    decisao = int(input("Deseja inserir algum produto?\n(1)Sim\n(2)Não\n"))
    break
if decisao == 1:
        produtos.insert(2,str(input("Digite o produto que deseja adicionar: ")))
print(produtos)