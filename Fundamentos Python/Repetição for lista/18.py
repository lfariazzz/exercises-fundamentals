soma = 0
for i in range(0,20):
    n = int(input())
    if n**2 < 300:
        soma = soma + n
print(soma)