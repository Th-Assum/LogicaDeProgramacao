x = int(input("Valor de x: "))
y = int(input("Valor de y: "))

if x > 0 and y > 0:
    print("Q1")
elif x < 0 and y > 0:
    print("Q2")
elif x < 0 and y < 0:
    print("Q3")
elif x > 0 and y < 0:
    print("Q4")
elif x == 0 and y != 0:
    print("Eixo Y")
elif y == 0 and x != 0:
    print("Eixo X")
else:
    print("Origem")