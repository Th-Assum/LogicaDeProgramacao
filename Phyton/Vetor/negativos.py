n = int(input("Quantos numeros voce vai digitar? "))
vet = [0 for x in range(n)]

for i in range(n):
    vet[i] = int(input("Digite um numero: "))


print("Numeros Negativos: ")
for i  in range(n):
    if vet[i] < 0:
        print(vet[i])


