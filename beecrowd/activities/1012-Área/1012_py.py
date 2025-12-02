
a, b, c = input().split(" ")

a = float(a)
b = float(b)
c = float(c)

pi = 3.14159

base_triangulo = a
altura_triangulo = c

raio_circulo = c

base_trapezio1 = a
base_trapezio2 = b
altura_trapezio = c

lado_quadrado = b

lado_retangulo1 = a
lado_retangulo2 = b

area_triangulo = (base_triangulo * altura_triangulo) / 2
area_circulo = pi * (raio_circulo ** 2)
area_trapezio = ((base_trapezio1 + base_trapezio2) / 2) * altura_trapezio
area_quadrado = lado_quadrado ** 2
area_retangulo = lado_retangulo1 * lado_retangulo2

print(f"TRIANGULO: {area_triangulo:.3f}")
print(f"CIRCULO: {area_circulo:.3f}")
print(f"TRAPEZIO: {area_trapezio:.3f}")
print(f"QUADRADO: {area_quadrado:.3f}")
print(f"RETANGULO: {area_retangulo:.3f}")