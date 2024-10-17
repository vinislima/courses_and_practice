nota1, nota2, nota3, nota4 = input().split(" ")

nota1 = float(nota1)
nota2 = float(nota2)
nota3 = float(nota3)
nota4 = float(nota4)

media = ((nota1 * 2) + (nota2 * 3) + (nota3 * 4) + (nota4 * 1)) / 10

if media >= 7.0:
    print(f"Media: {media:.1f}")
    print("Aluno aprovado.")
elif media >= 5.0 and media <= 6.9:
    print(f"Media: {media:.1f}")
    print("Aluno em exame.")
    exame = float(input())
    print(f"Nota do exame: {exame:.1f}")
    calculo_exame = (exame + media) / 2
    if calculo_exame >= 5.0:
        print("Aluno aprovado.")
        print(f"Media final: {calculo_exame:.1f}")
    else:
        print("Aluno reprovado.")
        print(f"Media final: {calculo_exame:.1f}")
else:
    print(f"Media: {media:.1f}")
    print("Aluno reprovado.")