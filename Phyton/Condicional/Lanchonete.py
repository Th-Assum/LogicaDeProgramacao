codigo = int(input("Codigo do produto comprado: "))
qnt = int(input("Quantidade comprada: "))

if codigo == 1:
    valor = qnt*5.00
    print(f"Valor a pagar: R$ {valor:.2f}")
elif codigo == 2:
    valor = qnt*3.5
    print(f"Valor a pagar: R$ {valor:.2f}")
elif codigo == 3:
    valor = qnt * 4.80
    print(f"Valor a pagar: R$ {valor:.2f}")
elif codigo == 4:
    valor = qnt * 8.90
    print(f"Valor a pagar: R$ {valor:.2f}")
elif codigo == 5:
    valor = qnt * 7.32
    print(f"Valor a pagar: R$ {valor:.2f}")