print("Digite os valores das coordenadas X e Y: ")
x = int(input())
y = int(input())
while x and y !=0 :
    if x and y > 0:
         print("Quadrante Q1")
         print("Digite os valores das coordenadas X e Y: ")
         x = int(input())
         y = int(input())
    elif x < 0 and y > 0:
        print ("Quadrante Q2")
        print("Digite os valores das coordenadas X e Y: ")
        x = int(input())
        y = int(input())
    elif x and y < 0:
        print ("Quadrante Q3")
        print("Digite os valores das coordenadas X e Y: ")
        x = int(input())
        y = int(input())
    elif x > 0 and y < 0:
        print ("Quadrante Q4")
        print("Digite os valores das coordenadas X e Y: ")
        x = int(input())
        y = int(input())
