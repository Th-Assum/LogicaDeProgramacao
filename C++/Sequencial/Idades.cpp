#include <iostream>
#include <iomanip>
#include <string>
#include <climits>




using namespace std;
int main(){

    double media, idade, idade1;
    string  nome, nome1;


    cout << "Dados da primeira pessoa: " <<  endl;
    cout << "Nome :";
    getline(cin, nome);
    cout << "Idade: ";
    cin >> idade;

        cout << "Dados da primeira pessoa: " <<  endl;
        cout << "Nome :";
        cin.ignore(INT_MAX, '\n');
        getline(cin, nome1);
        cout << "Idade: ";
        cin >> idade1;

            media = (idade + idade1) / 2;

            cout << fixed << setprecision(1);
            cout << "A idade media de " << nome << " e " << nome1 << " e de " << media << " anos." << endl;



}

