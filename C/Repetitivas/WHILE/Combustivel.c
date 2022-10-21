#include <stdio.h>
int main(){

int a=0, g=0, d=0, cod;

printf("Informe um codigo (1, 2, 3) ou 4 para parar:");
scanf("%d", &cod);

while(cod != 4){
    if(cod == 1){
        a = a + 1;
    }else if(cod == 2){
        g = g + 1;
        }else if(cod == 3){
        d = d + 1;
        }else{
        printf("Nao computado.");
        }
    printf("Informe um codigo (1, 2, 3) ou 4 para parar:");
    scanf("%d", &cod);
}
printf("MUITO OBRIGADO!!\n");
printf("Alcool: %d\n", a);
printf("Gasolina: %d\n",g);
printf("Diesel: %d\n", d);

}
