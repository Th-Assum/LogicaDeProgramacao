linhas = int(input("Quantas linhas vai ter cada matriz? "))
colunas = int(input("Quantas colunas vai ter cada matriz? "))

matA = [[0 for x in range(colunas)]for x in range(linhas)]
matB = [[0 for x in range(colunas)]for x in range(linhas)]
matC = [[0 for x in range(colunas)]for x in range(linhas)]

print("Digite os valores da matriz A:")
for i in range(linhas):
    for j in range(colunas):
        matA[i][j] = int(input(f"Elemento [{i},{j}]:"))

print("Digite os valores da matriz B:")
for i in range(linhas):
    for j in range(colunas):
        matB[i][j] = int(input(f"Elemento [{i},{j}]:"))

print("MATRIZ SOMA: ")
for i in range(linhas):
    for j in range(colunas):
        matC[i][j] = matA[i][j] + matB[i][j]
        print(matC[i][j], end=" ")
    print()
