duracao = int(input("Digite a duracao em segundos: "))
horas = duracao // 3600
resto = duracao % 3600
minutos = resto // 60
segundos = resto % 60

print(f"{horas}:{minutos}:{segundos}")
