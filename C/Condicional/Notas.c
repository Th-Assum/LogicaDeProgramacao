#include <stdio.h>
int main()
{
    double nota1, nota2, notaFinal;

    printf("Digite a Primeira nota:");
    scanf("%lf", &nota1);

    printf("Digite a Segunda nota:");
    scanf("%lf", &nota2);

    notaFinal = nota1 + nota2;

    printf("NOTA FINAL = %.1lf\n", notaFinal);

    if (notaFinal < 60.0){
        printf("REPROVADO\n");



    }

}
