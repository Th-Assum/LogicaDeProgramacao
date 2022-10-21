n = int(input("Quantos casos você vai digitar? "))
media = 0
for i in range(0,n):
    print("Digite tres numeros: ")
    x = float(input())
    media += x*2
    x = float(input())
    media += x*3
    x = float(input())
    media += x*5
    print(f"MEDIA = {media / 10:.1f}")
    media=0



