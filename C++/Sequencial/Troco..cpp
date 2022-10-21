#include <iostream>
#include <iomanip>


using namespace std;

int main(){
double un, din, troco, qnt;

    cout << "Preco unitario do produto: ";
    cin >> un;
        cout <<"Quantidade comprada: ";
        cin >> qnt;
            cout << "Dinheiro Recebido: ";
            cin >> din;
                cout << fixed << setprecision(2);
                    troco = din - (un * qnt);
                        if (troco < 0){
                            troco = troco * -1;
                                cout << "VALOR INSUFICIENTE, FALTA " << troco << "$ !!!" << endl;
                            }else {
                                cout << "TROCO = " << troco;
                            }


}
