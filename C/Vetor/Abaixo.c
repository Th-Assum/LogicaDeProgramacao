#include<stdio.h>
int main(){

int n,i;
double media=0;

    printf("Quantos elementos vai ter o vetor? ");
    scanf("%d", &n);
        double vet[n];

    for(i=0; i<n; i++){
        printf("Digite um numero:");
        scanf("%lf", &vet[i]);
        media = media + vet[i];
        }
media = media/n;
    printf("MEDIA DO VETOR = %.3lf\n", media);
    printf("ELEMENTOS ABAIXO DA MEDIA: \n");
    for(i=0; i<n; i++){
        if(vet[i]< media){
            printf("%.1lf\n", vet[i]);
        }

    }





}
