n = int(input("Quantos elementos vai ter o vetor ?"))

vet = [0 for x in range(n)]
media = 0
cont = 0
for i in range(n):
    vet[i] = int(input("Digite um numero: "))
    if vet[i] % 2 == 0:
        media += vet[i]
        cont += 1

if media != 0:
    print(f"MEDIA DOS PARES = {media/cont:.1f}")
else:
    print("NENHUM NUMERO PAR")

