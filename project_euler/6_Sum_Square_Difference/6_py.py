natural_soma = 0 #variável declara para somar a soma dos números não elevados
natural_soma_elevado = 0 #variável para após a soma elevar a segunda potência
natural_elevado = 0 #variável para somar os números elevados
resultado = 0

for i in range(101): #percorre de 1 a 100
  natural_soma = natural_soma + i #soma e atualiza a variável
natural_soma_elevado = natural_soma**2 #eleva a soma a segunda potência

for j in range(101): #percorre de 1 a 100
  natural_elevado = natural_elevado + j**2 #eleva o número a segunda potência, soma e atualiza a variável

resultado = natural_soma_elevado - natural_elevado #faz a subtração

#imprime os resultados
print(natural_soma_elevado)
print(natural_elevado)
print(resultado)