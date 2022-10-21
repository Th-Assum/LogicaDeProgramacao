n = int(input("Quantos numeros você vai digitar? "))

vet = [0 for x in range(n)]
pares = 0
for i in range (n):
    vet[i] = int(input("Digite um numero: "))

print("Numeros Pares: ")
for i in range (n):
    if vet[i] % 2 == 0:
        pares += 1
        print(vet[i], end=" ")

print(f"Quantidade de pares = {pares}")
