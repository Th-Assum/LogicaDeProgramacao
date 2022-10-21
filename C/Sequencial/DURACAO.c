#include<stdio.h>

int main(){

    int min, seg, hrs, resto, duracao;

    printf("Digite a duracao em segundos :");
    scanf("%d", &duracao);

    hrs = duracao/3600;
    resto = duracao % 3600;
    min = resto/60;
    seg = resto % 60;

    printf("%d:%d:%d", hrs, min, seg);




return 0;
}
