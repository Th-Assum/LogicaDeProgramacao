#include<iostream>

using namespace std;
int main(){

    int i,j,n;

    cout << "Qual a ordem da matriz? ";
    cin >> n;
            int vet[n][n], negativo=0;

            for (i=0; i<n; i++){
                for (j=0; j<n; j++){
                    cout << "Elemento [" << i << "," << j << "]:";
                    cin >> vet[i][j];

                }
            }
            cout << "\nDIAGONAL PRINCIPAL:"<<endl;
            for (i=0; i<n; i++){
                for (j=0; j<n; j++){
                if (i==j){
                        cout << vet[i][j] << " ";
                    }
                if (vet[i][j] < 0){
                    negativo = negativo + 1;
                }
                }
            }
            cout << "\nQUANTIDADE DE NEGATIVOS = " << negativo;



}
