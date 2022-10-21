#include <stdio.h>

int main()
{
    char Un;
    float F1,C1;

    printf("Voce vai digitar a temperatura em qual escala (C/F)?");
    scanf("%c", &Un);

    if(Un == 'f' || Un == 'F'){
        printf("Digite a temperatura em Fahrenheit:");
        scanf("%f", &F1);

        C1 = 5.0/9.0 * (F1-32.0);
        printf("Temperatura equivalente em Celsius: %f", C1);

    }else if(Un == 'c' || Un == 'C'){
        printf("Digite a temperatura em Celsius: ");
        scanf("%f", &C1);

        F1 = C1 * (9.0/5.0) + 32.0;
        printf("Temperatura equivalente em Fahrenheit: %f", F1);
        }else{
            printf("VALOR DIGITADO INVALIDO!!! DIGITE C OU F.");
         }

return 0;
}
