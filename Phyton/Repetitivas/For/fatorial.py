n = int(input("Digite o valor de N: "))
fatorial = 1
for i in range(n,0,-1):
    fatorial *= i
print(f"FATORIAL = {fatorial}")
