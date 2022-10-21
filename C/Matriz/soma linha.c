#include <stdio.h>
int main(){

int l,c,i,j;

    printf("Qual a quantidade de linhas da matriz?");
    scanf("%d", &l);
    printf("Qual a quantidade de colunas da matriz?");
    scanf("%d", &c);

        double mat[l][c], vet[l];

            for (i=0;i<l;i++){
                    printf("Digite os elementos da %d. linha:\n", i+1);
                for(j=0;j<c;j++){
                    scanf("%lf", &mat[i][j]);

                }
            }
        for(i=0;i<l;i++){
            for(j=0;j<c;j++){
                vet[i] = vet[i] + mat[i][j];
            }
        }
        printf("VETOR GERADO:\n");
            for(i=0;i<l;i++){
                printf("%.2lf\n", vet[i]);
        }
}
