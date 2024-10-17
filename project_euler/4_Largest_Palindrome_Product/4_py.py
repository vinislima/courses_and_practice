
maior_palindromo = 0 #variável que recebe o maior palindromo

for i in range(100, 1000):  # Loop para o primeiro número de três dígitos
    for j in range(100, 1000):  # Loop para o segundo número de três dígitos
        produto = i * j
        produto_str = str(produto) # transforma em string para a inversão no passo seguinte
        produto_inverso = produto_str[::-1] # usa o slice para inverter a string
        
        # Verifica se o produto é um palíndromo e se é maior do que o maior palíndromo encontrado até agora
        if produto_str == produto_inverso and produto > maior_palindromo:
            maior_palindromo = produto

print("Maior palíndromo:", maior_palindromo)