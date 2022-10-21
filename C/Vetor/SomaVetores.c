#include<stdio.h>
int main(){

    int i, n;

    printf("Quantos valores vai ter cada vetor?");
    scanf("%d", &n);
            int vetA[n], vetB[n], vetC[n];

        printf("Digite os valores do vetor A:\n");
            for(i=0; i<n; i++){
                scanf("%d", &vetA[i]);
    }
            printf("Digite os valores do vetor B:\n");
                for(i=0; i<n; i++){
                    scanf("%d", &vetB[i]);
    }
                printf("VETOR RESULTANTE: \n");
                    for(i=0; i<n; i++){
                        vetC[i] = vetA[i] + vetB[i];
                            printf("%d\n", vetC[i]);
                    }

}
