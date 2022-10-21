#include <stdio.h>
int main()
{
double Valor;

printf("Digite a medida da glicose: ");
scanf("%lf", &Valor);

if(Valor <= 100){
    printf ("Classificacao: Normal");
}else if(Valor >= 100 && Valor <= 140){
    printf("Classificacao: Elevado");
}else{
    printf("Classificacao: Diabetes");
    }

return 0;
}
