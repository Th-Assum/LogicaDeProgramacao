#include <stdio.h>
#include <string.h>

void limpar_entrada() {
 char c;
 while ((c = getchar()) != '\n' && c != EOF) {}
}

int main(){

    int i,n, m;

    printf("Quantas pessoas voce vai digitar? ");
    scanf("%d", &n);
        int idade[n];
        char nome[n][50];

    for(i=0; i<n; i++){
        printf("Dados da %da pessoa:\n", i+1);
        printf("Nome :");
        limpar_entrada();
        gets(nome[i]);
        printf("Idade :");
        scanf("%d", &idade[i]);

            }
        m = 0;
    for (i=1; i<n; i++){
            if(idade[i]>idade[i-1]){
               m = i;
            }

    }
            printf("\nPESSOA MAIS VELHA: %s", nome[m]);
    }






