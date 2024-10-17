inicial = [1, 2] #lista inicial
resto = 0 #variavel para acumular os impares
par = 0 #variavel para acumular os pares
a = 0 #variavel para indice
b = 1 #variavel para indice
c = 0 #variavel para somar o ultimo número
i = 0 #variavel para o incremeto de indice
limite = 4000000 #limite estipulado pelo exercício

while c < limite: #recorrência enquanto o ultimo número for menor que o limite
	c = inicial[a] + inicial[b] #soma para o ultimo número
	if c < limite: #teste para verificar se o último número não é maior que o limite
		inicial.append(c) #acrescenta na lista
		a = (len(inicial) - 2) #altera o indice para o penultimo item da lista
		b = (len(inicial) - 1) #altera o indice para o ultimo item da lista
print(inicial) #no final imprime a lista apenas para verificar

for i in range(len(inicial)): #percorre a lista populada
	if inicial[i] % 2 == 0: #verifica se o número é par
		par += inicial[i] #soma os números pares
	else:
		resto += inicial[i] #soma os números impares
print(par) #imprime o resultado da soma dos pares
