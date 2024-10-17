
codigo_lista = [1, 2, 3, 4, 5]
precos_lista = [4.00, 4.50, 5.00, 2.00, 1.50]

codigo, quantidade = input().split(" ")

codigo = int(codigo) - 1
quantidade = float(quantidade)
total = precos_lista[codigo] * quantidade


print(f"Total: R$ {total:.2f}")