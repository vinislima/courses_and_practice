
a, b = input().split()

a = int(a)
b = int(b)

if a > b:
    teste = a % b
    if teste == 0:
        print("Sao Multiplos")
    else:
        print("Nao sao Multiplos")
else:
    teste = b % a
    if teste == 0:
        print("Sao Multiplos")
    else:
        print("Nao sao Multiplos")