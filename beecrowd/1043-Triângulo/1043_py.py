
a, b, c = input().split()

a = float(a)
b = float(b)
c = float(c)

teste_triangulo1 = (a + b) > c
teste_triangulo2 = (b + c) > a
teste_triangulo3 = (a + c) > b

teste = (teste_triangulo1 == teste_triangulo2 == teste_triangulo3)

if teste:
    perimetro = a + b + c
    print(f"Perimetro = {perimetro:.1f}")
else:
    area = ((a + b) * c) / 2
    print(f"Area = {area:.1f}")