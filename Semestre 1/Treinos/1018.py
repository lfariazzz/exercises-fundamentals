#1018 - Cédulas

#n = int(input())
#qtd_100 = n // 100
#resto100 = n % 100
#qtd_50 = resto100 // 50
#resto50 = resto100 % 50
#qtd_20 = resto50 // 20
#resto20 = resto50 % 20
#qtd10 = resto20 // 10
#resto10 = resto20 % 10
#qtd5 = resto10 // 5
#resto5 = resto10 % 5
#qtd2 = resto5 // 2
#resto2 = resto5 % 2
#qtd1 = resto2 // 1
#if n > 0 and n < 1000000:
#    print(n)
#    print(f"{qtd_100} nota(s) de R$ 100,00")
#    print(f"{qtd_50} nota(s) de R$ 50,00")
#    print(f"{qtd_20} nota(s) de R$ 20,00")
#    print(f"{qtd10} nota(s) de R$ 10,00")
#    print(f"{qtd5} nota(s) de R$ 5,00")
#    print(f"{qtd2} nota(s) de R$ 2,00")
#    print(f"{qtd1} nota(s) de R$ 1,00")


#Tentar refatorar com funções

cedulas = [100,50,20,10,5,2,1]
for i in range(len(cedulas))
def cedulas(n):
    qtd = n // 100
    resto = n % 100
    return(qtd)