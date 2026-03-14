cardapio = {1001: 1.50,
            1002: 2.50, 
            1003: 3.50,
            1004: 4.50,
            1005: 5.50 }
total = 0
qtd_produtos = int(input())
if qtd_produtos >= 1 and qtd_produtos <=5:
    for i in range(qtd_produtos):
        valor = 0
        soma = 0
        id, qtd = map(int, input().split())
        if qtd >= 1 and qtd <= 500:
            valor = cardapio[id]
        soma = valor * qtd
        total += soma
print(f"{total:.2f}")