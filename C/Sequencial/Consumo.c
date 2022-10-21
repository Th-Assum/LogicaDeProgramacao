#include<stdio.h>

int main(){
    double Consumo, Distancia, ConsumoMedio;

    printf("Distancia Percorrida: ");
    scanf("%lf", &Distancia);

    printf("Combustivel gasto: ");
    scanf("%lf", &Consumo);

    ConsumoMedio = Distancia/Consumo;

    printf("Consumo medio = %.3lf", ConsumoMedio);

return 0;
}
