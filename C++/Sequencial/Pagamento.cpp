#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
int main(){
    string nome;
    double valor, horas, total;

    cout << "Nome :";
    getline(cin, nome);
    cout << "Valor por hora:";
    cin >> valor;
    cout << "Horas Trabalhadas:";
    cin >> horas;

        total = valor * horas;

    cout << fixed << setprecision(2);
    cout << "O Pagamento para " << nome << " deve ser " << total;






}
