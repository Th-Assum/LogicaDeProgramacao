#include <stdio.h>
int main()
{
double maior, V1, V2, V3;
maior = 0;
printf("Digite as tres distancias:\n");
scanf("%lf", &V1);
scanf("%lf", &V2);
scanf("%lf", &V3);

if (V1 > V2 && V1 > V3){
    maior = V1;
}else if(V2 > V1 && V2 > V3){
    maior = V2;
    }else {maior = V3;}
printf("MAIOR DISTANCIA = %.2lf", maior);

}
