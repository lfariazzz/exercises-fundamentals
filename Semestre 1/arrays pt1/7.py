numeros = []
while len(numeros) < 10:
    n = int(input("Digite um número ímpar: "))
    if n % 2 and not n in numeros:
        numeros.append(n)
    else:
        print("Número inválido - Par ou repetido, tente novamente")
print(numeros.sort(reverse=True))
print("Quantidades de 7:", numeros.count(7))
decisao = (int(input("(1) Remover algum valor\n(2)Manter lista\n")))
if decisao == 1:
    remocao = int(input("Qual valor deseja remover? "))
    numeros.remove(remocao)
print(numeros)