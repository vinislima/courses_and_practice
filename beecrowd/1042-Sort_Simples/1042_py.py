
a, b, c = input().split()

a = int(a)
b = int(b)
c = int(c)

lista = [a,b,c]
normal = sorted(lista)

for i in normal:
  print(i)
print("")
for i in lista:
  print(i)