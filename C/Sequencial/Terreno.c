#include <stdio.h>

int main()
{
    double lag, comp, valor, area, preco;

    printf("Digite a largura do terreno: ");
    scanf("%lf", &lag);

    printf("Digite a comprimento do terreno: ");
    scanf("%lf", &comp);

    printf("Digite o valor do metro quadrado:");
    scanf("%lf", &valor);

    area = lag * comp;
    preco = area * valor;

    printf("Area do terreno = %.2lf\n", area);
    printf("Preco do terreno = %.2lf\n", preco);






return 0;
}
