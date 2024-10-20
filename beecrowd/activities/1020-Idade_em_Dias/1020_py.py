
dias_informado = int(input())

cont_anos = 0
cont_meses = 0
cont_dias = 0

while dias_informado >= 365:
    a = dias_informado - 365
    dias_informado = a
    cont_anos += 1

while dias_informado >= 30:
    b = dias_informado - 30
    dias_informado = b
    cont_meses += 1

while dias_informado >= 1:
    c = dias_informado - 1
    dias_informado = c
    cont_dias += 1

print(f"{cont_anos} ano(s)")
print(f"{cont_meses} mes(es)")
print(f"{cont_dias} dia(s)")