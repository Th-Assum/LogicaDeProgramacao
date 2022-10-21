#include<stdio.h>
int main(){

    int i,j,l,c;

        printf("Quantas linhas vai ter cada matriz?");
        scanf("%d", &l);
            printf("Quantas colunas vai ter cada matriz?");
            scanf("%d", &c);
                int matA[l][c],matB[l][c],matC[l][c];


        printf("Digite os valores da matriz A:\n");
                    for(i=0;i<l;i++){
                        for(j=0;j<c;j++){
                            printf("Elemento [%d,%d]:", i,j);
                            scanf("%d", &matA[i][j]);
                        }
                    }
        printf("Digite os valores da matriz B:\n");
                    for(i=0;i<l;i++){
                        for(j=0;j<c;j++){
                            printf("Elemento [%d,%d]:", i,j);
                            scanf("%d", &matB[i][j]);
                        }
                    }
        printf("MATRIZ SOMA:");
                    for(i=0; i<l; i++){
                            printf("\n");
                        for(j=0;j<c; j++){
                            matC[i][j] = matA[i][j] + matB[i][j];
                            printf("%d ", matC[i][j]);
                        }
                    }



}
