#include <stdio.h>
int main(){
    int n, i, pares=0;

        printf("Quantos numeros voce vai digitar?");
        scanf("%d", &n);
            int vet[n];

    for(i=0; i<n; i++){
        printf("Digite um numero:");
        scanf("%d", &vet[i]);
    }
            printf("\nNUMEROS PARES:\n");

                  for(i=0; i<n; i++){
                        if(vet[i] % 2 == 0){
                            ;
                            printf("%d  ", vet[i]);
                            pares++;
                        }

}
printf("\nQUANTIDADE DE PARES = %d", pares);
}
