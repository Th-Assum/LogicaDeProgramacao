n = int(input("Quantas pessoas serão digitadas? "))
altura = [0 for x in range(n)]
genero = [0 for x in range(n)]

for i in range(n):
    altura[i] = float(input(f"Altura da {i+1}ª pessoa: "))
    genero[i] = str(input(f"Genero da {i + 1}ª pessoa: "))

menor = altura[0]
maior = altura[0]
homens = 0
mulheres = 0
mediaM = 0

for i in range(0,n):

    if altura[i] < menor:
        menor = altura[i]
    if altura[i] > maior:
        maior = altura[i]
    if genero[i] == 'M':
        homens += 1
    elif genero[i] == "F":
        mediaM += altura[i]
        mulheres += 1
mediaM = mediaM/mulheres

print(f"Menor altura = {menor}")
print(f"Maior altura = {maior}")
print(f"Media das alturas das mulheres = {mediaM}")
print(f"Numero de homens = {homens}")
