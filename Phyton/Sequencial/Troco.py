preco = float(input("Preço unitário do produto: "))
dinheiro = int(input("Quantidade comprada: "))
recebido = float(input("Dinheiro recebido: "))

troco = recebido - (preco*dinheiro)

print(f"TROCO = {troco:.2f}")