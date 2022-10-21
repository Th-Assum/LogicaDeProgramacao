glicose = float(input("Digite a medida da glicose: "))

if glicose <= 100.0:
    print("Classificacao: normal ")
elif glicose <= 140.0:
    print("Classificacao: elevado ")
else:
    print("Classificacao: diabetes")