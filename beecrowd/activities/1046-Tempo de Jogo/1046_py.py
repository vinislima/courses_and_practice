def main ():
	a_str, b_str = input().split()

	a = float(a_str)
	b = float(b_str)

	if (a == b):
		clock = 24
		print(f'O JOGO DUROU {clock:.0f} HORA(S)')
		return
	if ((a >= 12 and b >= 12) or (a < 12 and b >= 12)):
		clock = b - a
		print(f'O JOGO DUROU {clock:.0f} HORA(S)')
		return
	if (a >= 12 and b < 12):
		a = 24 - a
		clock = a + b
		print(f'O JOGO DUROU {clock:.0f} HORA(S)')
		return
	if ((a < 12 and b < 12) and a > b):
		clock = 24 + (b - a)
		print(f'O JOGO DUROU {clock:.0f} HORA(S)')
		return
	return
main()