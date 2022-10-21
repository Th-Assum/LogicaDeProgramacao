#include<iostream>
using namespace std;
int main(){

double media, soma, n,i;

    cout << "Digite as idades: " << endl;
    cin >> n;
    i=0;
        if (n < 0){
            cout << "IMPOSSIVEL CALCULAR " << endl;
        }else{
        while (n>0){
            i = i+1;
            soma = soma + n;
            cin >> n;
            }
        }
        media = soma/i;
        cout << "MEDIA = "<< media;


}
