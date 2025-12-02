
def main():
	a, b, c = input().split()

	a = float(a)
	b = float(b)
	c = float(c)

	if (a == b and b == c and c == a):
		print("TRIANGULO ACUTANGULO")
		print("TRIANGULO EQUILATERO")
		return
	elif (a > b and a > c):
		bigger = a
		size_a = b
		size_b = c
	elif (b > a and b > c):
		bigger = b
		size_a = a
		size_b = c
	elif (c > a and c > b):
		bigger = c
		size_a = a
		size_b = b
	else:
		bigger = a
		size_a = b
		size_b = c
	
	if (bigger >= size_a + size_b):
		print("NAO FORMA TRIANGULO")
		return
	if ((bigger ** 2) == (size_a ** 2) + (size_b ** 2)):
		print("TRIANGULO RETANGULO")
	if ((bigger ** 2) > (size_a ** 2) + (size_b ** 2)):
		print("TRIANGULO OBTUSANGULO")
	if ((bigger ** 2) < (size_a ** 2) + (size_b ** 2)):
		print("TRIANGULO ACUTANGULO")
	if ((size_a == size_b and size_a != bigger) or (size_a == bigger and size_a != size_b) or (size_b == bigger and size_b != size_a)):
		print("TRIANGULO ISOSCELES")
		return
main()
