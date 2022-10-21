n = int(input("Quantas pessoas serão digitadas? "))
nome = [0 for x in range(n)]
idade = [0 for x in range(n)]
altura = [0 for x in range(n)]
media = 0
menor = 0
for i in range(n):
    print(f"Dados da {i+1}ª pessoa: ")
    nome[i] = input("Nome: ")
    idade[i] = int(input("Idade: "))
    altura[i] = float(input("Altura: "))
    media += altura[i]
    if idade[i] < 16:
        menor += 1

print(f"Altura média: {media/n:.2f}")
print(f"Pessoas com menos de 16 anos: {(menor*100)/n:.1f}%")

for i in range(n):
    if idade[i] < 16:
        print(nome[i])


