x = int(input("Quantos numeros vai digitar ?"))
numero = 0
dentro = 0
fora = 0
for i in range(0,x):
    numero = int(input("Digite um numero:"))
    if numero > 10 and numero < 20:
        dentro += 1
    else:
        fora += 1

print(f"{dentro} DENTRO")
print(f"{fora} FORA")