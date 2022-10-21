import math

baseRetangulo = float(input("Base do retangulo: "))
alturaRetangulo = float(input("Altura do retangulo: "))

area = baseRetangulo * alturaRetangulo
perimetro = 2*(baseRetangulo+alturaRetangulo)
diagonal = math.sqrt(baseRetangulo ** 2 + alturaRetangulo ** 2)

print(f"AREA = {area:.4f}")
print(f"PERIMETRO = {perimetro:.4f}")
print(f"DIAGONAL = {diagonal:.4f}")

