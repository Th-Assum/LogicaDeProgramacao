#include<iostream>
#include<iomanip>
#include<climits>
#include<string>

using namespace std;
int main(){
        int n,i,p1=0,p2=0,p3=0;

    cout << "Serao digitados dados de quantos produtos?";
    cin >> n;
        string nome[n];
        double compra[n], venda[n], porcentagem=0, totalC=0, totalV=0, lucro;

        //entrada de dados
            for (i=0;i<n;i++){
                cout << "Produto " << i+1 <<": "<<endl;
                cout << "Nome :";
                cin.ignore(INT_MAX, '\n');
                getline(cin, nome[i]);
                cout << "Preco de compra: ";
                cin >> compra[i];
                cout << "Preco de venda: ";
                cin >> venda[i];
                }

            for (i=0;i<n;i++){
                    totalC = totalC + compra[i];
                    totalV = totalV + venda[i];
                    porcentagem = ((venda[i] - compra[i])*100)/compra[i];
                    if (porcentagem < 10){
                        p1 = p1 + 1;
                    }else if(porcentagem >= 10 && porcentagem < 20 ){
                        p2 = p2 + 1;
                    }else {
                        p3 = p3 + 1;
                        }
                    }
            lucro = totalV - totalC;
            cout << "RELATORIO:" << endl;
            cout << "Lucro abaixo de 10%: " << p1 << endl;
            cout << "Lucro entre 10% e 20%: " << p2 << endl;
            cout << "Lucro acima de 20%: " << p3 << endl;
            cout << fixed << setprecision(2);
            cout << "Valor total de compra: " << totalC << endl;
            cout << "Valor total de venda: " << totalV << endl;
            cout << "Lucro total: " << lucro;


}
