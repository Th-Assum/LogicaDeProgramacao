#include<stdio.h>
void limpar_entrada() {
 char c;
 while ((c = getchar()) != '\n' && c != EOF) {}
}
int main(){

int n,i;
char tip;
double pc, pr, ps, c=0,r=0,s=0,qnt,total;

printf("Quantos casos de teste serao digitados?");
scanf("%d", &n);

    for (i=1; i<=n; i++){
        printf("Quantidade de cobaias:");
        scanf("%lf", &qnt);
            printf("Tipo de cobaia:");
            limpar_entrada();
            scanf("%c", &tip);

                if (tip == 'c' || tip == 'C'){
                    c = c + qnt;
                }else if (tip == 'r' || tip == 'R'){
                    r = r + qnt;
                }else if (tip == 's' || tip == 'S'){
                    s = s + qnt;
                }else {
                    printf("quantidade nao computada.\n");
                }
    }

        total = c + r + s;
    printf("RELATORIO FINAL:\n");
    printf("Total: %.2lf\n", total);
    printf("Total de Coelhos: %.2lf\n", c);
    printf("Total de Ratos: %.2lf\n", r);
    printf("Total de Sapos: %.2lf\n", s);

        pc = (c * 100)/total;
        pr = (r * 100)/total;
        ps = (s * 100)/total;

    printf("Percentual de Coelhos: %.2lf\n", pc);
    printf("Percentual de Ratos: %.2lf\n", pr);
    printf("Percentual de Sapos: %.2lf\n", ps);





}
