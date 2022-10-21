minutos = int(input("Digite a quantidade de minutos: "))
if minutos > 100:
    valor = minutos - 100
    valor *= 2.0
    valor += 50.00

    print(f"Valor a pagar: R$ {valor:.2f}")
else:
    print("Valor a pagar: R$ 50.00 ")

