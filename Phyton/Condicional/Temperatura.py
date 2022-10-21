escala = input("Voce vai digitar a temperatura em qual escala (C/F)? ")

if escala =='F' or escala == 'f':
    temp = float(input("Digite a temperatura em Fahrenheit: "))
    celsius = (5.0/9.0) * (temp-32.0)
    print(f"Temperatura equivalente em Celsius: {celsius:.2f}")

elif escala == 'C' or 'c':
    temp = float(input("Digite a temperatura em  Celsius: "))
    fahrenheit = temp * (9/5) + 32
    print(f"Temperatura equivalente em Fahrenheit: {fahrenheit:.2f}")

else:
    print("INVALIDO!!!")


