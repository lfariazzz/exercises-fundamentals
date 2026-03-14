qtd_repeticao = int(input())
for i in range(0,qtd_repeticao):
    fatorial = 1
    n = int(input())
    valor = n
    for j in range(n,0,-1):
        fatorial = fatorial * n
        n = n - 1
    print(f"valor lido = {valor} \n fatorial = {fatorial}")