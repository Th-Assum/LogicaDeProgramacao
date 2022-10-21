n = int(input("Qual a ordem da matriz ? "))

mat =[[0 for x in range(n)]for x in range(n)]

for i in range(n):
    for j in range(n):
        mat[i][j] = float(input(f"Elemento [{i},{j}]:"))

print()
somaPositivos = 0
for i in range(n):
    for j in range(n):
        if mat[i][j] > 0:
            somaPositivos += mat[i][j]

print(f"SOMA DOS POSITIVOS = {somaPositivos:.1f}")

print()
linha = int(input("Escolha uma linha: "))
print("LINHA ESCOLHIDA:", end=" ")
for i in range(n):
     print(f"{mat[linha][i]:.1f}", end=" ")

print()
coluna = int(input("Escolha uma coluna: "))
print("COLUNA ESCOLHIDA: ", end="")
for i in range(n):
     print(f"{mat[i][coluna]:.1f}", end=" ")

print()
print()
print("DIAGONAL PRINCIPAL: ", end="")
for i in range(n):
    for j in range(n):
        if i == j:
            print(f"{mat[i][j]:.1f}", end=" ")

print()
print()
print("MATRIZ ALTERADA: ")
for i in range(n):
    for j in range(n):
        if mat[i][j] < 0:
            mat[i][j] = mat[i][j] ** 2.0
            print(f"{mat[i][j]}", end=" ")
        else:
            print(f"{mat[i][j]}", end=" ")
    print()