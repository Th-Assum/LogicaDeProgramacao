#include<stdio.h>
int main(){

    int n, i;
    double media, soma=0;

        printf("Quantos numeros voce vai digitar?");
        scanf("%d", &n);

            double vet[n];

                for(i=0; i<n; i++){
                    printf("Digite um numero:");
                    scanf("%lf", &vet[i]);
                        soma = soma + vet[i];
                }
        printf("\nValores = ");

            for(i=0; i<n; i++){
                printf("%.2lf ", vet[i]);
            }

        printf("\nSOMA = %.2lf\n", soma);
        media= soma/n;
        printf("MEDIA = %.2lf", media);

return 0;
}
