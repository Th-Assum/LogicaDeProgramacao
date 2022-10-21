#include<stdio.h>
int main()
{
int n, i, pos=0;
double maior=0;

printf("Quanto numeros voce vai digitar?");
scanf("%d", &n);
    double vet[n];

        for(i=0; i<n; i++){
            printf("Digite um numero:");
            scanf("%lf", &vet[i]);
              if(vet[i] > maior){
                maior = vet[i];
                pos = i;
              }

        }

        printf("\nMAIOR VALOR = %.2lf\n", maior);
        printf("POSICAO DO MAIOR VALOR = %d", pos);





}
