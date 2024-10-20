
entrada = float(input())
valor = entrada * 100

cem_nota = 0
cinquenta_nota = 0
vinte_nota = 0
dez_nota = 0
cinco_nota = 0
dois_nota = 0
um_moeda = 0
cinquenta_moeda = 0
vintecinco_moeda = 0
dez_moeda = 0
cinco_moeda = 0
umcentavo_moeda = 0

while valor >= 10000:
    a = valor - 10000
    valor = a
    cem_nota += 1

while valor >= 5000:
    b = valor - 5000
    valor = b
    cinquenta_nota += 1

while valor >= 2000:
    c = valor - 2000
    valor = c
    vinte_nota += 1

while valor >= 1000:
    d = valor - 1000
    valor = d
    dez_nota += 1

while valor >= 500:
    e = valor - 500
    valor = e
    cinco_nota += 1

while valor >= 200:
    f = valor - 200
    valor = f
    dois_nota += 1

while valor >= 100:
    g = valor - 100
    valor = g
    um_moeda += 1

while valor >= 50:
    h = valor - 50
    valor = h
    cinquenta_moeda += 1

while valor >= 25:
    i = valor - 25
    valor = i
    vintecinco_moeda += 1

while valor >= 10:
    j = valor - 10
    valor = j
    dez_moeda += 1

while valor >= 5:
    k = valor - 5
    valor = k
    cinco_moeda += 1

while valor >= 1:
    l = valor - 1
    valor = l
    umcentavo_moeda += 1

print(f"NOTAS:")
print(f"{cem_nota} nota(s) de R$ 100.00")
print(f"{cinquenta_nota} nota(s) de R$ 50.00")
print(f"{vinte_nota} nota(s) de R$ 20.00")
print(f"{dez_nota} nota(s) de R$ 10.00")
print(f"{cinco_nota} nota(s) de R$ 5.00")
print(f"{dois_nota} nota(s) de R$ 2.00")
print(f"MOEDAS:")
print(f"{um_moeda} moeda(s) de R$ 1.00")
print(f"{cinquenta_moeda} moeda(s) de R$ 0.50")
print(f"{vintecinco_moeda} moeda(s) de R$ 0.25")
print(f"{dez_moeda} moeda(s) de R$ 0.10")
print(f"{cinco_moeda} moeda(s) de R$ 0.05")
print(f"{umcentavo_moeda} moeda(s) de R$ 0.01")