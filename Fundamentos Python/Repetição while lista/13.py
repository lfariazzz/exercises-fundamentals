pares = 0
impares = 0
somatorio_par = 0
somatorio_geral = 0
total = 0
n = int(input())
if n > 0:
    while n != 0:
        total += 1
        somatorio_geral += n
        if n % 2 == 0:
            pares += 1
            somatorio_par += n
        else:
            impares += 1
        n = int(input())
media_par = somatorio_par / pares
media_geral = somatorio_geral / total
print(f"Pares = {pares}\nÍmpares = {impares}\nMédia de pares = {media_par}\nMédia Geral = {media_geral}")