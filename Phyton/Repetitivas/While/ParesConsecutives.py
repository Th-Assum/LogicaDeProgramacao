num = int(input("Digite um numero inteiro: "))
while num != 0:
    if num % 2 != 0:
        num += 1
    soma = (num * 5) + 20
    print(f"SOMA = {soma}")
    num = int(input("Digite um numero inteiro: "))
