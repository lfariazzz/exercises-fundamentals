# 1101

m, n = map(int, input().split())
numeros = []
while m > 0 and n > 0:
    soma = 0
    if m > n:
        for i in range(n,m + 1):
            soma += i
            print(i,end=" ")
        print(f"Sum={soma}")
    elif n > m:
        for i in range(m,n + 1):
            print(i,end=" ",)
            soma += i
        print(f"Sum={soma}")
    else:
        print(f"{m} {n} Sum={m+n}")
    m, n = map(int, input().split())