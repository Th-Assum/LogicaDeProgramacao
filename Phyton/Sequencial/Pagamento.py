nome = input("Nome: ")
valorHora = float(input("Valor por hora: "))
horas = int(input("Horas trabalhadas: "))

print(f"O Pagamento para {nome} deve ser {valorHora * horas:.2f}")