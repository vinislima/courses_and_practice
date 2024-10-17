
a = float(input())

if a < 0 or a >= 100.01:
    print("Fora de intervalo")
elif a >= 75.01:
    print("Intervalo (75,100]")
elif a >= 50.01:
    print("Intervalo (50,75]")
elif a >= 25.01:
    print("Intervalo (25,50]")
else:
    print("Intervalo [0,25]")