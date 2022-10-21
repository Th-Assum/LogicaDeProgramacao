#include <stdio.h>
int main()
{
    int x, n,i;

    printf("Quantos numeros voce vai digitar?");
    scanf("%d", &n);

        for(i=1; i<=n; i++){
            printf("Digite um numero:");
            scanf("%d", &x);
                if (x == 0){
                    printf("NULO! \n");
                }else if(x < 0 && x % 2 != 0){
                    printf("IMPAR NEGATIVO! \n");
                }else if(x < 0 && x % 2 == 0){
                    printf("PAR NEGATIVO! \n");
                }else if(x > 0 && x % 2 != 0){
                    printf("IMPAR POSITIVO! \n");
                }else if(x > 0 && x % 2 == 0){
                printf("PAR POSITIVO! \n");
                }
            }
}
