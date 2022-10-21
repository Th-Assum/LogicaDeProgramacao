n = int(input("Quantos elementos vai ter o vetor ?"))
vet = [0 for x in range(n)]
media = 0

for i in range(n):
    vet[i] = float(input("Digite um numero: "))
    media += vet[i]

media = media/n
print(f"MÉDIA DO VETOR = {media:.3f}")
print("ELEMENTOS ABAIXO DA MÉDIA: ")
for i in range(n):
    if vet[i] < media:
        print(vet[i])
