n = int(input())
contagem = 0
while n != 0:
    if n >= 50 and n <= 400:
        contagem += 1
    n = int(input())
    
print(contagem)