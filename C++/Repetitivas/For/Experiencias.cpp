#include<iostream>
#include <iomanip>

using namespace std;
int main(){
    int i, n;
    double sapos=0, ratos=0, coelhos=0, total=0, ps, pr,pc, qnt;
    char cobaia;

        cout << "Quantos casos de teste serao digitados? ";
        cin >> n;

            for(i=0; i<n; i++){
                cout << "Quantidade de cobaias: ";
                cin  >> qnt;
                    cout << "Tipos de cobaias :";
                    cin >> cobaia;
                        if(cobaia == 'c' || cobaia == 'C'){
                                coelhos = coelhos + qnt;
                                total = total + qnt;

                        }else if(cobaia == 'r' || cobaia == 'R'){
                                ratos = ratos + qnt;
                                total = total + qnt;

                        }else if(cobaia == 's' || cobaia == 'S'){
                                sapos = sapos + qnt;
                                total = total + qnt;

                        }else {
                        cout << "Cobaia inexistente, nao computado:";}

            }



            pc = (coelhos*100)/total;
            pr = (ratos*100)/total;
            ps = (sapos*100)/total;

            cout << "Relatorio Final: \n";
            cout << "Total : " << total << " Cobaias\n";
            cout << "Total de coelhos: "<< coelhos << endl;
            cout << "Total de ratos: " << ratos << endl;
            cout << "Total de sapos: " << sapos << endl;
            cout << fixed << setprecision(2);
            cout << "Percentual de coelhos: " << pc << "%" << endl;
            cout << "Percentual de ratos: " << pr << "%" << endl;
            cout << "Percentual de sapos: " << ps << "%" << endl;



}
