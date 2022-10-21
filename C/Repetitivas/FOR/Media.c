#include <stdio.h>
int main()
{

int n, i;
double n1, n2, n3, media;

    printf("Quantos casos voce vai digitar? ");
    scanf("%d", &n);

        for(i=1; i<=n; i++){
            printf("Digite tres numeros:\n");
            scanf("%lf %lf %lf", &n1, &n2, &n3);

                n1 = n1 * 2;
                n2 = n2 * 3;
                n3 = n3 * 5;
                media = (n1 + n2 + n3)/10.0;

            printf("MEDIA = %.2lf\n", media);


        }



}
