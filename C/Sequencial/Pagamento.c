#include<stdio.h>


int main(){
    char nome[50];
    double vl, pg;
    int hora;

    printf("Nome :");
    gets(nome);
    printf("Valor por hora: ");
    scanf("%lf", &vl);
    printf("Horas Trabalhadas: ");
    scanf("%d", &hora);


    pg = (double) vl * hora;

    printf("O pagamento para %s deve ser %.2lf\n", nome, pg);




return 0;
}
