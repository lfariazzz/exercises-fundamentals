n = float(input())
a1 = float(input())
r = float(input())
sn = 0
contador = 0
while contador < n:
    print(a1)
    sn += a1
    a1 += r
    contador += 1
print("Soma = ", sn)
