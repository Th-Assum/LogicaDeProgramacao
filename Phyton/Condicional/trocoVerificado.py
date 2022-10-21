unidade = float(input("Preço unitário do produto: "))
qnt = int(input("Quantidade comprada: "))
dinheiro = float(input("Dinheiro recebido: "))

total = unidade * qnt

if dinheiro < total:
    print(f"DINHEIRO INSUFICIENTE. FALTAM R$ {total - dinheiro:.2f} ")
else:
    print(f"TROCO = R$ {dinheiro - total:.2f}")
