
import math

a, b, c = input().split(" ")

a = float(a)
b = float(b)
c = float(c)

discriminante = (b * b) - ((4 * a) * c)

if a <= 0 or b <= 0 or c <= 0 or discriminante <= 0:
    print("Impossivel calcular")
else:
    raiz = math.sqrt(discriminante)
    raiz = float(raiz)
    x1 = ((-(b)) + raiz) / (2 * a)
    x2 = ((-(b)) - raiz) / (2 * a)
    print(f"R1 = {x1:.5f}")
    print(f"R2 = {x2:.5f}")