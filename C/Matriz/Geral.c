#include<stdio.h>
int main(){

 int i,j,n,l,c;


        printf("Qual a ordem da matriz?");
        scanf("%d", &n);
            double mat[n][n], soma;

    //entrada de dados
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("Elemento [%d,%d]:", i,j);
            scanf("%lf", &mat[i][j]);
        }
    }
    //SOMA DOS POSITIVOS
    soma=0;
     for(i=0;i<n;i++){
        for(j=0;j<n;j++){
           if(mat[i][j] > 0){soma = soma + mat[i][j];}
        }
    }
    printf("\nSOMA DOS POSITIVOS: %.1lf\n", soma);

    //ESCOLHA DE LINHAS

    printf("\nEscolha uma linha:");
    scanf("%d", &l);
        printf("LINHA ESCOLHIDA:");
            for (i=0;i<n;i++){
                printf("%.1lf ", mat[l][i]);
        }
        printf("\n\nEscolha uma coluna:");
        scanf("%d", &c);
            printf("COLUNA ESCOLHIDA:");
            for (i=0;i<n;i++){
                printf("%.1lf ", mat[i][c]);
        }

        //DIAGONAL PRINCIPAL
        printf("\n\nDIAGONAL PRINCIPAL:");
            for(i=0;i<n;i++){
                for(j=0;j<n;j++){
                    if (i == j){
                        printf("%.1lf ", mat[i][j]);
                    }
                }
        }

        //MATRIZ ALTERADA

        printf("\n\nMATRIZ ALTERADA: ");
       for(i=0;i<n;i++){
            printf("\n");
                for(j=0;j<n;j++){
                    if (mat[i][j] < 0){
                        mat[i][j] = mat[i][j] * mat[i][j];
                }
                printf("%.1lf ", mat[i][j]);
                    }
                        }
}
