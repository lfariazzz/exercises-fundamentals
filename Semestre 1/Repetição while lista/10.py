acima_50anos = 0
somatorio_alturas10_20anos = 0
qtd_pessoas_10_20anos = 0
qtd_pessoas = 0
menor_45kg = 0
while True:
    idade = int(input("Idade: "))
    altura = float(input("Altura(em M): "))
    peso = float(input("Peso(em KG): "))
    qtd_pessoas += 1
    if peso < 45:
        menor_45kg += 1
    if idade >= 10 and idade <= 20:
        qtd_pessoas_10_20anos +=1
        somatorio_alturas10_20anos += altura
    if idade > 50:
        acima_50anos += 1
    decisao = int(input("(1)Cadastrar outra pessoa\n(2)Mostrar resultados\n"))
    if decisao == 2:
        break
if qtd_pessoas_10_20anos > 0:
    media_altura_10_20 = somatorio_alturas10_20anos / qtd_pessoas_10_20anos
if qtd_pessoas > 0:
    porcentagem_45kg_menos = menor_45kg / qtd_pessoas * 100
print(f"Pessoas acima de 50 anos: {acima_50anos}")
print(f"Média de altura das pessoas entre 10 e 20 anos: {media_altura_10_20:.2f}")
print(f"Porcentagem de pessoas inferior a 45kg: {porcentagem_45kg_menos}%")