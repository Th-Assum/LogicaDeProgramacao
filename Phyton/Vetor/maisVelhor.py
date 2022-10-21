n = int(input("Quantas pessoas você vai digita ?"))
nome = [0 for x in range(n)]
idade = [0 for x in range(n)]

for i in range(n):
    print(f"Dados da {i+1} pessoa: ")
    nome[i] = input("Nome: ")
    idade[i] = int(input("Idade: "))
maisVelho = 0
for i in range(1,n):
    if idade[i] > idade[i-1]:
        maisVelho = i

print(f"PESSOA MAIS VELHA: {nome[maisVelho]}")
