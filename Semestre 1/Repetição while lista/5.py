menor21 = 0
maior50 = 0
entre21_50 = 0
while True:
    n = int(input())
    if n < 21 and n >= 0:
        menor21 += 1
    elif n > 50:
        maior50 += 1
    elif n >= 21 and n <= 50:
        entre21_50 += 1
    elif n < 0:
        break
print(f"Menores que 21 {menor21}\nMaiores que 50 {maior50}\nEntre 21 e 50 {entre21_50}")