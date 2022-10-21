#include<iostream>
#include <iomanip>
using namespace std;
int main(){

double salario,aumento,novo;

    cout << "Digite o salario da pessoa:";
    cin >> salario;

        if (salario <= 1000){
            aumento = (salario*20)/100;
            novo = salario + aumento;
            cout << fixed << setprecision(2);
            cout << "Novo salario = R$ " << novo << endl;
            cout << "Aumento = R$ " << aumento << endl;
            cout << "Porcentagem = 20 % ";

        }else if(salario > 1000 && salario <= 3000 ){
            aumento = (salario*15)/100;
            novo = salario + aumento;
            cout << fixed << setprecision(2);
            cout << "Novo salario = R$ " << novo << endl;
            cout << "Aumento = R$ " << aumento << endl;
            cout << "Porcentagem = 15 % ";

        }else if(salario > 3000 && salario <= 8000 ){
            aumento = (salario*10)/100;
            novo = salario + aumento;
            cout << fixed << setprecision(2);
            cout << "Novo salario = R$ " << novo << endl;
            cout << "Aumento = R$ " << aumento << endl;
            cout << "Porcentagem = 10 % ";
        }else {
            aumento = (salario*5)/100;
            novo = salario + aumento;
            cout << fixed << setprecision(2);
            cout << "Novo salario = R$ " << novo << endl;
            cout << "Aumento = R$ " << aumento << endl;
            cout << "Porcentagem = 5 % ";}
            return 0;



}
