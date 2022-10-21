#include <stdio.h>
int main(){
int idade, i=0;
double media=0;

printf("Digite as idades:\n");
scanf("%d", &idade);


if(idade < 0){
    printf("IMPOSSIVEL CALCULAR\n");
}else{
    while(idade > 0 ){
        i = i+1;
        media = media + idade;

    scanf("%d", &idade);
}

media = media / i;
printf("MEDIA = %.2lf", media);
}
}
