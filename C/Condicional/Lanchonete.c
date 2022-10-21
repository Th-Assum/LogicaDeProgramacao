#include <stdio.h>

int main()
{
int codigo, qnt;
double valor;

    printf("Codigo do produto comprado:");
    scanf("%d", &codigo);
    printf("Quantidade comprada:");
    scanf("%d", &qnt);

    if(codigo == 1){
        valor = 5.00 * qnt;
    printf("Valor a pagar: %.2lf", valor);
    }else if(codigo == 2){
        valor = 3.50 * qnt;
        printf("Valor a pagar: %.2lf", valor);
    }else if(codigo == 3){
        valor = 4.80 * qnt;
     printf("Valor a pagar: %.2lf", valor);
    }else if (codigo == 4){
    valor = 8.90 * qnt;
    printf("Valor a pagar: %.2lf", valor);
    }else if(codigo == 5){
    valor = 7.32 * qnt;
    printf("Valor a pagar: %.2lf", valor);

    }else {
        printf("Codigo Invalido");}





}
