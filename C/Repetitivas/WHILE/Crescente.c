#include <stdio.h>

int main(){

    int x, y;

    printf("Digite dois numeros:\n");
    scanf("%d", &x);
    scanf("%d", &y);

    while (x != y){
        if(x < y){
        printf("CRESCENTE!\n");
        }else{
        printf("DESCRECENTE!\n");
        }
        printf("Digite outros dois numeros:\n");
        scanf("%d", &x);
        scanf("%d", &y);
        }
}
