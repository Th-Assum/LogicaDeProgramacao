n = int(input("Serão digitados dados de quantos produtos ?"))

nome = [0 for x in range(n)]
precoCompra = [0 for x in range(n)]
precoVenda = [0 for x in range(n)]

for i in range(n):
    print(f"Produto {i+1}:")
    nome[i] = input("Nome: ")
    precoCompra[i] = float(input("Preço compra = "))
    precoVenda[i] = float(input("Preco venda = "))

abaixo = 0
entre = 0
acima = 0
totalCompra = 0
totalVenda = 0
lucro = 0

for i in range(n):
    totalCompra += precoCompra[i]
    totalVenda += precoVenda[i]
    percentual = (precoVenda[i] - precoCompra[i])*100/precoCompra[i]
    if percentual < 10.0:
        abaixo += 1
    elif percentual <= 20.0:
        entre += 1
    else:
        acima += 1
lucro = totalCompra - totalVenda

print(f"Lucro abaixo de 10% = {abaixo}")
print(f"Lucro entre 10% e 20% = {entre}")
print(f"Lucro acima de 20% = {acima}")
print(f"Valor total da compra = {totalCompra:.2f}")
print(f"Valor total da venda = {totalVenda:.2f}")
print(f"Lucro = {lucro*(-1):.2f}")
