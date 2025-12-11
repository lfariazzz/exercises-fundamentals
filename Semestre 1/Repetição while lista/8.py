n = int(input())
n_maior = 0
n_menor = 10000000000
somatorio = 0
dividendo = 0
while n != 0:
    if n > n_maior:
        n_maior = n
    if n < n_menor:
        n_menor = n
    somatorio += n
    dividendo += 1
    media = somatorio / dividendo
    n = int(input())
print(f"O maior número é {n_maior}\nO menor número é {n_menor}\nA média dos números digitados é {media}")