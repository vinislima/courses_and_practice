menor = 1 #definição do menor dividendo
teste = 0 #variável que receberá o teste

while teste != True: #repetição enquanto não verdadeiro

	#teste longo e nada elegante para testar o menor dividendo de todos os números entre 1 e 20
  if menor % 1 == 0 and menor % 2 == 0 and menor % 3 == 0 and menor % 4 == 0 and menor % 5 == 0 and menor % 6 == 0 and menor % 7 == 0 and menor % 8 == 0 and menor % 9 == 0 and menor % 10 == 0 and menor % 11 == 0 and menor % 12 == 0 and menor % 13 == 0 and menor % 14 == 0 and menor % 15 == 0 and menor % 16 == 0 and menor % 17 == 0 and menor % 18 == 0 and menor % 19 == 0 and menor % 20 == 0:
    print(menor) 
    teste = True #em caso verdadeiro dos testes, variável teste recebe o valor de True
  else:
    menor += 1 #enquanto não houver verdade no teste, o dividendo é incrementado
    
print(menor)
print(teste)