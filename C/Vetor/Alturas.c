#include <stdio.h>

void limpar_entrada() {
 char c;
 while ((c = getchar()) != '\n' && c != EOF) {}
}

int main(){
    int i, n;

    printf("Quantas pessoas serao digitadas? ");
    scanf("%d", &n);

        int idade[n];
        char nome[n][50];
        double altura[n], Amedia=0, Iporcentagem=0;

            for(i=0; i<n; i++){
                printf("Dados da %da pessoa:\n", i+1);
                printf("Nome :");
                limpar_entrada();
                gets(nome[i]);
                printf("Idade :");
                scanf("%d", &idade[i]);
                printf("Altura :");
                scanf("%lf", &altura[i]);
                }
            for(i=0; i<n; i++){
                Amedia = Amedia + altura[i];
                    if(idade[i] < 16){
                        Iporcentagem = Iporcentagem + 1;
                    }
            }
                Amedia = Amedia/n;
                Iporcentagem = (Iporcentagem * 100)/n;

                    printf("\nAltura media: %.2lf\n", Amedia);
                    printf("Pessoas com menos de 16 anos: %.1lf %%\n", Iporcentagem);

                        for(i=0; i<n; i++){
                            if (idade[i] < 16){
                                printf("%s\n", nome[i]);
                            }
                        }
return 0;
}
