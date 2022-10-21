#include<stdio.h>
int main(){
int i, n;
double media=0, y=0;
    printf("Quantos elementos vai ter o vetor? ");
    scanf("%d", &n);
        int vet[n];

for (i=0; i<n; i++){
    printf("Digite um numero:");
    scanf("%d", &vet[i]);
        if(vet[i] % 2 == 0){
            media = media + vet[i];
            y = y + 1;
        }
}
    if (media==0){
        printf("NENHUM NUMERO PAR...");
    }else{
    media = media/y;
    printf("\nMEDIA DOS PARES = %.1lf", media);
    }



}
