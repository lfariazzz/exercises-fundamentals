soma = 0
den = 0
for i in range(0,20):
    n = int(input())
    if n % 2 != 0:
        soma = soma + n
        den = den + 1
        media = soma / den
print(media)