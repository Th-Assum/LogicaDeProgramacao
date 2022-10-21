#include <stdio.h>

int main()
{
    int x, y, i, soma=0, troca;

        printf("Digite dois numeros: \n");
        scanf("%d %d", &x, &y);
            if (x > y){
                troca = x;
                x = y;
                y = troca;}
        for (i=x+1; i<y; i++){
            if (i % 2 != 0){
            soma = soma + i;
        }
    }
        printf("SOMA DOS IMPARES = %d", soma);

}
