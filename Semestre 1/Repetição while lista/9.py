total_aprovados = 0
p1_aprovados = 0
p3_aprovados = 0
total_alunos = 0
while True:
    p1 = float(input("1a nota: "))
    p2 = float(input("2a nota: "))
    p3 = float(input("3a nota: "))
    total_alunos += 1
    if p1 > 6 and p2 > 6 and p3 > 6:
        total_aprovados += 1
    if p1 > 6:
        p1_aprovados += 1
    if p3 > 6:
        p3_aprovados += 1
    decisao = int(input("(1)Adicionar notas de outro aluno (2)Sair\n"))
    if decisao == 2:
        break
porcentagem_p3 = p3_aprovados / total_alunos * 100
print(f"Aprovados em todas as provas: {total_aprovados}")
print(f"Aprovados na primeira prova: {p1_aprovados}")
print(f"Porcentagem aprovados na terceira prova: {porcentagem_p3} %")