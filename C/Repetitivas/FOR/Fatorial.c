#include <stdio.h>
int main(){

int fatorial, n, i;

fatorial = 1;
    printf("Digite o valor de N:");
    scanf("%d", &n);

        if (n==0){
            fatorial = 0;
        }else{
            for(i=1; i<=n; i++){
                fatorial = fatorial * i;
            }
        }
            printf("Fatorial: %d", fatorial);


}
