#include <stdio.h>
int main(){

    int n, i, j, soma=0;

        printf("Qual a ordem da matriz?");
        scanf("%d", &n);

            int mat[n][n];

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
        printf("Elemento [%d,%d]:", i,j);
        scanf("%d", &mat[i][j]);
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
        if (j>i){
            soma = soma + mat[i][j];
            }
        }
    }

    printf("SOMA DOS ELEMENTOS ACIMA DA DIAGONAL PRINCIPAL = %d", soma);

}
