
inicial = 600851475143 #valor inicial do exercício
divisor = 2 #menor divisor além do 1

while inicial != divisor: #enquanto o valor inicial não for igual ao divisor, o código seguirá executando
	divisao = inicial / divisor #divisão entre o valor inicial e divisor
	teste_divisao = divisao.is_integer() #testa se o valor da divisão é inteiro
	if teste_divisao == False: #enquanto o teste retornar como falso
		divisor += 1 #o divisor é incrementado
	else: #quando retorna verdadeiro
		inicial = divisao #o novo valor da divisão assume o valor inicial
		divisor += 1 #o divisor é incrementado
print(inicial) #no final é apresentado o último valor inicial
print(divisao, teste_divisao) #apenas para teste