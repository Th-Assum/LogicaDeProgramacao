#include <stdio.h>
void limpar_entrada() {
 char c;
 while ((c = getchar()) != '\n' && c != EOF) {}
}

int main(){
    int i,n,h=0, m=0;
    double media=0, menor, maior=0;

    printf("Quantas pessoas serao digitadas? ");
    scanf("%d", &n);
        double alt[n];
        char sexo[n];

                    for(i=0; i<n; i++){//entrada de dados
                        printf("Altura da %da pessoa:", i+1);
                        scanf("%lf", &alt[i]);
                        printf("Genero da %da pessoa:", i+1);
                        limpar_entrada();
                        scanf("%s", &sexo[i]);
                        }
menor = alt[0];
    for(i=0; i<n; i++){
        if(alt[i] > maior){
            maior = alt[i];
        }
        if(alt[i] < menor){
            menor = alt[i];
        }
        if(sexo[i]=='m' || sexo[i]=='M'){
            h++;
        }else if(sexo[i]=='f' || sexo[i]=='F'){
            m = m+1;
            media = media + alt[i];
            }
        }
                media = media/m;
        printf("Menor altura = %.2lf\n", menor);
        printf("Maior altura = %.2lf\n", maior);
        printf("Media das alturas das mulheres = %.2lf\n", media);
        printf("Numero de homens = %d", h);
}
