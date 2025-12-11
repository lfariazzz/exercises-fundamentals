n = int(input())
e = 1
fatorial = 1
if n > 0:
    for i in range(1, n + 1):
        fatorial = fatorial * n
        for j in range(1, n + 1):
            fatorial = fatorial * j
            e = e + 1 / fatorial
print(e)