inicio = int(input("Hora inicial: "))
final = int(input("Hora final: "))

if inicio < final:
    duracao = final - inicio
else:
    duracao = 24 -(inicio - final)

print(f"O JOGO DUROU {duracao} HORA(S)")