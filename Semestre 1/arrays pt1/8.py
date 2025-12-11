opcoes = ["1 - Olá mundo", "2 - Eu programo em python", "3 - Laços de repetição", "4 - Adicionar nova opção", "5 - Remover opção pelo número"]
decisao = 0
while decisao <= 0 or decisao >= 6:
    for i in range(0,5):
        print(opcoes[i])
    decisao = (int(input("Digite qual operação deseja realizar: ")))
if decisao == 1:
    print(opcoes[0])
elif decisao == 2:
    print(opcoes[1])
elif decisao == 3:
    print(opcoes[2])
elif decisao == 4:
    opcoes.append(str(input("Insira o texto a ser adicionado: ")))
    for i in range(0,6):
        print(opcoes[i])
elif decisao == 5:
    remocao = int(input("Digite o índice do texto que quer remover: "))
    if remocao > 0 or remocao < 6:
        opcoes.pop(remocao)
        print (opcoes)
    else:
        print("Indice inválido")