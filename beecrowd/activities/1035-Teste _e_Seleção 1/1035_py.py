
a, b, c, d = input().split(" ")

a = int(a)
b = int(b)
c = int(c)
d = int(d)

teste1 = b > c
teste2 = d > a
teste3 = (c + d) > (a + b)
teste4 = (c > 0) and (d > 0)
teste5 = (a % 2) == 0
resultado = teste1 and teste2 and teste3 and teste4 and teste5

if resultado == True:
    print("Valores aceitos")
else:
    print("Valores nao aceitos")