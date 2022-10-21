n = int(input("Quantos numeros voce vai digitar? "))

vet = [0 for x in range(n)]
maior = 0
posicao = 0
for i in range(n):
    vet[i] = float(input("Digite um numero: "))

for i in range(1, n):
    if vet[i] > vet[i-1]:
        posicao = i

print(f"MAIOR VALOR = {vet[posicao]:.1f}")
print(f"POSICAO DO MAIOR VALOR = {posicao}")

