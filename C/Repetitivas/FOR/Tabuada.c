#include <stdio.h>

int main(){

    int produt, i, n;

        printf("Deseja a tabuada para qual valor?");
        scanf("%d", &n);

            for(i=1; i <= 10; i++){
                produt = n * i;
                printf("%d X %d = %d\n", n,i,produt);

            }

}
