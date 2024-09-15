def num_primo(numero):
  """
  Verifica se um número é primo.

  Argumentos:
    numero (int): O número a ser verificado.

  Retorna:
    bool: True se o número for primo, False caso contrário.
  """
  if numero <= 1:
    # Retorna False se o número for menor ou igual a 1, pois não são primos.
    return False

  a = numero  # Armazena o valor original do número
  b = 2       # Variável para o loop de divisão

  primo = True  # Flag para indicar se o número é primo (inicializado como True)

  while b * b <= a:  # Loop que verifica divisibilidade até a raiz quadrada do número
    if numero % b == 0:  # Se o número for divisível por b, não é primo
      primo = False
      break  # Sai do loop se encontrar um divisor
    b += 1  # Incrementa b para testar o próximo divisor

  return primo  # Retorna True se o número for primo, False caso contrário

def gerar_primos(limite):
  """
  Gera uma lista de números primos até um limite especificado.

  Argumentos:
    limite (int): O limite superior para a geração de primos.

  Retorna:
    list: Uma lista contendo os números primos até o limite especificado.
  """
  primos = []  # Lista para armazenar os números primos encontrados
  numero = 2  # Começa a verificação a partir de 2

  while len(primos) < limite:  # Loop continua até encontrar o número de primos desejado
    if num_primo(numero):  # Se o número for primo, adiciona à lista
      primos.append(numero)
    numero += 1  # Passa para o próximo número

  return primos  # Retorna a lista de números primos encontrados

# Gera uma lista de primos até 10.000
primos = gerar_primos(10001)

# Pega o último primo da lista
ultimo_primo = primos[-1]

# Exibe o último primo encontrado
print(f"Último primo encontrado: {ultimo_primo}")