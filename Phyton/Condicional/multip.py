print("Digite dois numeros inteiros: ")
x = int(input())
y = int(input())

if x < y:
    troca = x
    x = y
    y = troca

if x % y == 0:
    print("São multiplos")
else:
    print("Não são multiplos")