nota1 = float(input("Digite a primeira nota: "))
nota2 = float(input("Digite a segunda nota: "))

notaFinal = nota1 + nota2

print(f"NOTA FINAL = {notaFinal:.1f}")
if notaFinal < 60.00:
    print("REPROVADO")
