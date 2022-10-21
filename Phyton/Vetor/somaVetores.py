n = int(input("Quantos valores vai ter cada vetor? "))

vetA = [0 for x in range(n)]
vetB = [0 for x in range(n)]
vetC = [0 for x in range(n)]

print("Digite os valores do vetor A: ")

for i in range(n):
    vetA[i] = int(input())

print("Digite os valores do vetor B: ")

for i in range(n):
    vetB[i] = int(input())

print("VETOR RESULTANTE: ")
for i  in range(n):
    vetC[i] = vetA[i] + vetB[i]
    print(vetC[i])


