
valor = int(input())

valor_cont = valor
cem = 100
cinquenta = 50
vinte = 20
dez = 10
cinco = 5
dois = 2
um = 1
cont_cem = 0
cont_cinquenta = 0
cont_vinte = 0
cont_dez = 0
cont_cinco = 0
cont_dois = 0
cont_um = 0

while valor_cont >= cem:
    a = valor_cont - 100
    valor_cont = a
    cont_cem = cont_cem + 1

while valor_cont >= cinquenta:
    b = valor_cont - 50
    valor_cont = b
    cont_cinquenta = cont_cinquenta + 1

while valor_cont >= vinte:
    c = valor_cont - 20
    valor_cont = c
    cont_vinte = cont_vinte + 1

while valor_cont >= dez:
    d = valor_cont - 10
    valor_cont = d
    cont_dez = cont_dez + 1

while valor_cont >= cinco:
    e = valor_cont - 5
    valor_cont = e
    cont_cinco = cont_cinco + 1

while valor_cont >= dois:
    f = valor_cont - 2
    valor_cont = f
    cont_dois = cont_dois + 1

while valor_cont >= um:
    g = valor_cont - 1
    valor_cont = g
    cont_um = cont_um + 1

print(valor)
print(f"{cont_cem} nota(s) de R$ 100,00")
print(f"{cont_cinquenta} nota(s) de R$ 50,00")
print(f"{cont_vinte} nota(s) de R$ 20,00")
print(f"{cont_dez} nota(s) de R$ 10,00")
print(f"{cont_cinco} nota(s) de R$ 5,00")
print(f"{cont_dois} nota(s) de R$ 2,00")
print(f"{cont_um} nota(s) de R$ 1,00")