#include<stdio.h>

int main(){

    int qnt;
    double preco, troco, dinheiro;

    printf("Preco unitario do produto :");
    scanf("%lf", &preco);

    printf("Quantidade comprada :");
    scanf("%d", &qnt);

    printf("Dinheiro recebido: ");
    scanf("%lf", &dinheiro);

    troco = preco * qnt;
    troco = dinheiro - troco;

    printf("Troco = %.2lf", troco);





return 0;
}
