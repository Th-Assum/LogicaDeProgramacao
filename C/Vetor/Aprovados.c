#include <stdio.h>
#include <string.h>
void limpar_entrada() {
 char c;
 while ((c = getchar()) != '\n' && c != EOF) {}
}
int main(){
int i,n;
    printf("Quantos alunos serao digitados? ");
    scanf("%d", &n);
        double Nota1[n], Nota2[n], Media[n];
        char Nome[n][50];

                    for(i=0; i<n; i++){
                        printf("Digite nome, primeira e segunda nota do %do aluno:\n", i+1);
                        limpar_entrada();
                        gets(Nome[i]);
                        scanf("%lf", &Nota1[i]);
                        scanf("%lf", &Nota2[i]);
                        Media[i] = (Nota1[i] + Nota2[i])/2;
                        }

    printf("ALUNOS APROVADOS: \n");
    for(i=0;i<n;i++){
        if(Media[i]>=6.0){
            printf("%s\n", Nome[i]);
        }
    }
}
