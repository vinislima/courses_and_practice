tempo_informado = int(input())

cont_horas = 0
cont_minutos = 0
cont_segundos = 0

while tempo_informado >= 3600:
    a = tempo_informado - 3600
    tempo_informado = a
    cont_horas += 1

while tempo_informado >= 60:
    b = tempo_informado - 60
    tempo_informado = b
    cont_minutos += 1

while tempo_informado >= 1:
    c = tempo_informado - 1
    tempo_informado = c
    cont_segundos += 1;

print(f"{cont_horas}:{cont_minutos}:{cont_segundos}")