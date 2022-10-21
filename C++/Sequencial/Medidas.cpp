#include<iostream>
#include <iomanip>


using namespace std;
int main(){

double a,b,c,quadrado,triangulo,trapezio;

    cout << "Digite a medida A: ";
    cin >> a;
    cout << "Digite a medida B: ";
    cin >> b;
    cout << "Digite a medida C: ";
    cin >> c;

    quadrado = a * a;
    triangulo = a * b/2;
    trapezio = (a+b)*c/2;

    cout << fixed << setprecision(4);
    cout << "AREA DO QUADRADO : " << quadrado << endl;
    cout << "AREA DO TRIANGULO : " << triangulo << endl;
    cout << "AREA DO TRAPEZIO : " << trapezio << endl;

}
