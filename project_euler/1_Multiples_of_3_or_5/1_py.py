
numero = 1000 #limite da contagem
soma = 0 #variável para inteirar a soma

for i in range(1000): #percorrer o limite solicitado
	if i % 3 == 0 or i % 5 == 0: #teste para verificar se o número testado é multiplo de 3 ou 5
		soma = soma + i #em caso positivo a soma é realizada com o número testado
	else:
		continue #caso contrário ele pula aqui
print(soma) #no final apresenta o resultado

#233168