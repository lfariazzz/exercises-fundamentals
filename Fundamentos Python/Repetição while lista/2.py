masculino = 0 
feminino = 0 
while True:
    leitor = str(input())
    if leitor == "f" or leitor == "F":
        feminino += 1
    elif leitor == "m" or leitor == "M":
        masculino += 1
    else:
        break
print(f"Homens = {masculino}\nMulheres = {feminino}")