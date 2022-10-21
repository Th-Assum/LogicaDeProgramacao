n = int(input("Qual a ordem da matriz ?"))

mat = [[0 for x in range(n)]for x in range(n)]

for i in range(n):
    for j in range(n):
        mat[i][j] = int(input(f"Elemento [{i},{j}]:"))

print("Diagonal Principal: ")
negativosMatriz = 0
for i in range(n):
    for j in range(n):
        if i == j:
            print(mat[i][j],end=" ")
        if mat[i][j] < 0:
            negativosMatriz += 1
print()
print(f"QUANTIDADE DE NEGATIVOS = {negativosMatriz}")