contagemsim = 0
contagemnao = 0
for i in range(0,12):
    n = int(input())
    if n >= 10 and n <= 20:
        contagemsim = contagemsim + 1
    else:
        contagemnao = contagemnao + 1
print(f"{contagemsim} estão no intervalo e {contagemnao} não estão")