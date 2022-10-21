#include <stdio.h>
#include<math.h>

int main()
{
    double Base, Alt, Area, Per, Diag;

    printf("Base do Retangulo: ");
    scanf("%lf", &Base);
    printf("Altura do Retangulo: ");
    scanf("%lf", &Alt);

    Area = Base * Alt;
    Per = (2*Base) + (2*Alt);
    Diag = sqrt(pow(Base, 2.0)+ pow(Alt, 2.0));

    printf("AREA = %.4lf\n", Area);
    printf("PERIMETRO = %.4lf\n", Per);
    printf("DIAGONAL = %.4lf\n", Diag);


    return 0;
}
