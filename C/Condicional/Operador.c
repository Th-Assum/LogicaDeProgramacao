#include <stdio.h>
int main()
{
 int min;
 double valor;

     printf("Digite a quantidade de minutos: ");
     scanf("%d", &min);

     valor = 50,00;
        if(min > 100){
            valor = valor + 2*(min-100);
        }
        printf("Valor a Pagar : R$ %.2lf\n", valor);
        return 0;

}
