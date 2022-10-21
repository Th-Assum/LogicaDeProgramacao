linhas = int(input("Qual a quantidade de linhas da matriz ? "))
colunas = int(input("Qual a quantidade de colunas da matriz ?"))

mat = [[0 for x in range(colunas)]for x in range(linhas)]
vet = [0 for x in range(linhas)]

for i in range(linhas):
    vet[i] = 0
    print(f"Digite os elementos da {i + 1}ª linha: ")
    for j in range(colunas):
        mat[i][j] = float(input())
        vet[i] = vet[i] + mat[i][j]

print("Vetor Gerado: ")
for i in range(linhas):
    print(f"{vet[i]:.1f}")

