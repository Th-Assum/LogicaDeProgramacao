n = int(input("Quantos alunos serão digitados ?"))

nome = [0 for x in range(n)]
nota1 = [0 for x in range(n)]
nota2 = [0 for x in range(n)]

for i in range(n):
    print(f"Digite o nome, primeira nota e segunda nota do {i}º aluno:")
    nome[i] = input()
    nota1[i] = float(input())
    nota2[i] = float(input())

print("Alunos aprovados: ")
for i in range(n):
   if (nota1[i]+nota2[i])/2 >= 6.0:
        print(nome[i])