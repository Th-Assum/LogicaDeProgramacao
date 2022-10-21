print("Digite as idades: ")
idade = float(input())
cont = 0
media = 0
if idade < 0:
    print("IMPOSSIVEL CALCULAR ")
else:
   while idade > 0:
        media += idade
        cont += 1
        idade = float(input())
   media = media / cont
   print(f"MEDIA = {media:.2f}")
