#include <stdio.h>
int main(){

int l,c,i,j;

    printf("Qual a quantidade de linhas da matriz? ");
    scanf("%d", &l);
        printf("Qual a quantidade de colunas da matriz? ");
        scanf("%d", &c);
           int mat[l][c];

                for(i=0;i<l;i++){
                    for(j=0;j<c;j++){
                        printf("Elemento [%d,%d]:", i,j);
                        scanf("%d", &mat[i][j]);
                }
            }
                printf("\nVALORES NEGATIVOS:\n");
                    for(i=0;i<l;i++){
                        for(j=0;j<c;j++){
                            if(mat[i][j] < 0){
                                printf("%d\n", mat[i][j]);
                            }
                }
            }


}
