c1 = 0
c2 = 0
c3 = 0
c4 = 0
vn = 0
vb = 0
vt = 0
while True:
    voto = int(input())
    vt += 1
    if voto == 1:
        c1 += 1
    elif voto == 2:
        c2 += 1
    elif voto == 3:
        c3 += 1
    elif voto == 4:
        c4 += 1
    elif voto == 5:
        vn += 1
    elif voto == 6:
        vb += 1
    if voto == 7:
        vt -= 1
        break
percentagem = (vb + vn) / vt *100
print(f"Candidato 1 = {c1} votos")
print(f"Candidato 2 = {c2} votos")
print(f"Candidato 3 = {c3} votos")
print(f"Candidato 4 = {c4} votos")
print(f"Votos nulos = {vn} votos")
print(f"Votos em branco = {vb} votos")
print(f"Porcentagem de votos nulos e brancos = {percentagem:.2f}%")