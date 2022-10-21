#include <stdio.h>
void limpar_entrada() {
 char c;
 while ((c = getchar()) != '\n' && c != EOF) {}
}

int main()
{
    int n,i,l1=0,l2=0,l3=0;
        printf("Serao digitados dados de quantos produtos?");
        scanf("%d", &n);
            double porcento, compra[n], venda[n], totalC=0, totalV=0, lucroT;
            char nome[n][50];

                    //ENTRADA DE DADOS:
                    for(i=0;i<n;i++){
                        printf("Produto %d\n", i+1);
                        printf("Nome: ");
                        limpar_entrada();
                        gets(nome[i]);
                        printf("Preco de compra:");
                        scanf("%lf", &compra[i]);
                        printf("Preco de venda:");
                        scanf("%lf", &venda[i]);
                    }

                    //CALCULOS DO LUCRO
                    for (i=0;i<n;i++){
                       porcento = ((venda[i] - compra[i]) * 100)/compra[i];
                       if(porcento < 10){
                        l1 = l1 + 1;
                       }else if(porcento >= 10 && porcento <= 20){
                        l2 = l2 + 1;
                       }else {
                        l3 = l3 + 1;
                       }
                        totalC = totalC + compra[i];
                        totalV = totalV + venda[i];
                        }
                        lucroT = totalV - totalC;

                    //SAIDA DE DADOS
                    printf("\nRELATORIO: \n");
                    printf("Lucro abaixo de 10%%: %d\n", l1);
                    printf("Lucro entre 10%% e 20%%: %d\n", l2);
                    printf("Lucro acima de 20%%: %d\n", l3);
                    printf("Valor total de compra: %.2lf\n", totalC);
                    printf("Valor total de venda: %.2lf\n", totalV);
                    printf("Lucro total: %.2lf", lucroT);
}
