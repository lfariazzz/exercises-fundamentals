par = 0
for i in range(0, 10):
    n = int(input())
    if n % 2 == 0:
        par = par + 1
print(f"{par} números são pares")