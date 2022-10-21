valor1 = int(input("Primeiro Valor: "))
valor2 = int(input("Segundo Valor: "))
valor3 = int(input("Terceiro Valor: "))

if valor1 < valor2 and valor1 < valor3:
    menor = valor1
elif valor2 < valor3:
    menor = valor2
else:
    menor = valor3

print(f"MENOR = {menor}")

