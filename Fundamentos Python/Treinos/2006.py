dias = int(input())
ano = dias // 365
meses = (dias % 365) // 30
dias2 = (dias % 365) % 30
print (f"{ano} ano(s) \n{meses} mes(es) \n{dias2} dia(s)")