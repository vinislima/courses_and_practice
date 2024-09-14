
codigo, peca, valor = input().split(" ")
codigo1, peca1, valor1 = input().split(" ")

peca = int(peca)
valor = float(valor)
peca1 = int(peca1)
valor1 = float(valor1)

calculo = (peca * valor)
calculo1 =  (peca1 * valor1)

total = calculo + calculo1

print(f"VALOR A PAGAR: R$ {total:.2f}")