#include <stdio.h>

int main()
{
    int Menor, Valor1, Valor2, Valor3;

    printf ("Primeiro Valor:");
    scanf ("%d", &Valor1);
    printf ("Primeiro Valor:");
    scanf ("%d", &Valor2);
    printf ("Primeiro Valor:");
    scanf ("%d", &Valor3);

    if (Valor1 < Valor2 && Valor1 < Valor3){
        Menor = Valor1;
    }else if (Valor2 < Valor1 && Valor2 < Valor3){
        Menor = Valor2;
    }else{Menor = Valor3;}

    printf("Menor =%d\n", Menor);
    return 0;
}
