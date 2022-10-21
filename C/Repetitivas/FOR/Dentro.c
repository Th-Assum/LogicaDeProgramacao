#include <stdio.h>

int main(){

int f=0, d=0, i, n, x;
    printf("Quantos numeros voce vai digitar?");
    scanf("%d", &n);

        for(i=1; i<=n;i++){
             printf ("Digite um numero:");
             scanf("%d", &x);
                if(x >= 10 && x <= 20){
                        d = d + 1;}
                            else {f = f +1;}
        }

printf("DENTRO = %d\n", d);
printf("FORA = %d\n", f);

}
