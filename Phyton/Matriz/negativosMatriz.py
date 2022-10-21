linhas = int(input("Qual a quantidades de linhas da matriz ? "))
colunas = int(input("Qual a quantidade de colunas da matriz ? "))

mat = [[0 for x in range(colunas)]for x in range(linhas)]

for i in range(linhas):
    for j in range(colunas):
        mat[i][j] = int(input(f"Elemento [{i},{j}]:"))
print("Valores Negativos: ")
for i in range(linhas):
    for j in range(colunas):
        if mat[i][j] < 0:
            print(mat[i][j])
