n = int(input("Quantos numeros você vai digitar ?"))
vet = [0 for x in range(n)]

for i in range(n):
    vet[i] = float(input("Digite um numero: "))

print("VALORES =", end=" ")
soma = 0
for i in range(n):
    soma += vet[i]
    print(vet[i], end="  ")

print()
print(f"SOMA = {soma}")
print(f"MEDIA = {soma/n:.2f}")

