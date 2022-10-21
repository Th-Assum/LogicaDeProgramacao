#include<stdio.h>

int main(){

    double a, b, c, AreaQuadrado, AreaTriangulo, AreaTrapezio;

    printf("Digite a medida A:");
    scanf("%lf", &a);
    printf("Digite a medida B:");
    scanf("%lf", &b);
    printf("Digite a medida C:");
    scanf("%lf", &c);


    AreaQuadrado = a*a;
    AreaTriangulo = (a*b)/2;
    AreaTrapezio = ((a+b)*c)/2;



    printf("AREA DO QUADRADO = %.4lf\n", AreaQuadrado);
    printf("AREA DO TRIANGULO = %.4lf\n", AreaTriangulo);
    printf("AREA DO TRAPEZIO = %.4lf\n", AreaTrapezio);



return 0;
}
