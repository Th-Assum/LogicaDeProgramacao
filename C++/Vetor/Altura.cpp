#include<iostream>
#include<iomanip>
#include<climits>
#include<string>

using namespace std;
int main(){

    int i,n;
    double media=0, porcento=0;

    cout << "Quantas pessoas serao digitadas?";
    cin >> n;
        int idade[n];
        string nome[n];
        double alt[n];

        //Entrada de dados

        for (i=0;i<n;i++){
            cout << "Dados da "<< i+1 << "a pessoa:\n";
            cout << "Nome : ";
            cin.ignore(INT_MAX, '\n');
            getline(cin, nome[i]);
            cout << "Idade : ";
            cin >> idade[i];
            cout << "Altura : ";
            cin >> alt[i];
            }
        for (i=0;i<n;i++){
            media=media + alt[i];
                if (idade[i]<16){
                    porcento = porcento + 1;
                }
            }
          media = media/n;
            porcento = (porcento*100)/5;

          cout << fixed << setprecision(2);
          cout << "Altura media: " << media << endl;
          cout << fixed << setprecision(1);
          cout << "Pessoas com menos de 16 anos: "<< porcento << "%" << endl;
          for (i=0;i<n;i++){
            if (idade[i]<16){
                cout << nome[i]<<endl;
            }

          }






}
