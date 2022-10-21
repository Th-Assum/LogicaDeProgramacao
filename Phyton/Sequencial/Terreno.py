largura = float(input("Digite a largura do terreno: "))
comprimento = float(input("Digite o comprimento do terreno: "))
metroQuadrado = float(input("Digite o valor do metro quadrado: "))

area = largura*comprimento
valor = area * metroQuadrado

print(f"Area do terreno = {area}")
print(f"Preço do terreno = {valor}")