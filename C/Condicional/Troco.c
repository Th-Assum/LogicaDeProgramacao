#include <stdio.h>
int main()
{
int Qnt;
double P, Din, Troco;

printf("Preço unitario do produto:");
scanf("%lf", &P);
printf("Quantidade comprada:");
scanf("%d", &Qnt);
printf("Dinheiro Recebido: ");
scanf("%lf", &Din);

Troco = Din - (P * Qnt);
    if(Troco<0){
        Troco = Troco * -1;
    printf("Dinheiro Insuficiente. Faltam %.2lf Reais", Troco);
}else {
printf("Troco = R$ %.2lf", Troco);

}




}
