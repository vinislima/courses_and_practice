a = 1

while (a < 1000):
	b = a
	while (b < 1000 - a):
		c = 1000 - a - b
		if (a**2 + b**2 == c**2):
			product = a * b * c
			print(a, b, c)
			print(product)
			break
		b += 1
	a += 1
