soma = 0
for i in range(0,20):
    num = int(input())
    if num**2 < 225:
        soma = soma + num
print(soma)