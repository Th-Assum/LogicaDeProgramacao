#include <iostream>
#include <math.h>
#include<iomanip>
using namespace std;
int main()
{
    double Base, Alt, Area, Per, Diag;

    cout << "Base do Retangulo: ";
    cin >> Base;
    cout << "Altura do Retangulo: ";
    cin >> Alt;

    Area = Base * Alt;
    Per = (2*Base) + (2*Alt);
    Diag = sqrt(pow(Base, 2.0)+ pow(Alt, 2.0));

    cout << fixed << setprecision(4);
    cout << "AREA = " << Area << endl;
    cout << "PERIMETRO = " << Per << endl;
    cout << "DIAGONAL = " << Diag << endl;


    return 0;
}
