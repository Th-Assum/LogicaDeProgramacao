#include<iostream>
#include <iomanip>
using namespace std;
int main(){

int i,j,n,l,c;

cout << fixed << setprecision(1);
cout << "Qual a ordem da  matriz ?";
cin >> n;
        double mat[n][n], soma=0;

            for (i=0; i<n; i++){
                    for(j=0; j<n; j++){
cout << "Elemento [" << i << ","<< j << "]:";
cin >> mat[i][j];
            }
        }
            for (i=0; i<n; i++){
                    for(j=0; j<n; j++){
                        if(mat[i][j] > 0){
                            soma = soma + mat[i][j];
                        }
                }
        }
cout << "\nSOMA DOS POSITIVOS: " << soma << endl;

           cout << "Escolha uma linha: ";
           cin >> l;
           cout << "LINHA ESCOLHIDA: " ;

                for (i=0;i<n;i++){
                 cout << " " << mat[l][i];
                    }

           cout << "\nEscolha uma coluna: ";
           cin >> c;
           cout << "COLUNA ESCOLHIDA: " ;

                for (i=0;i<n;i++){
                 cout << " " << mat[i][c];
                    }
            cout << "\nDIAGONAL PRINCIPAL: ";
                for (i=0; i<n; i++){
                    for(j=0; j<n; j++){
                      if(i == j){
                            cout << mat[i][j];
                        }
                }
        }
        cout << "\nMATRIZ ALTERADA: " << endl;
             for (i=0; i<n; i++){
                    for(j=0; j<n; j++){
                        if(mat[i][j] < 0){
                            mat[i][j] = mat[i][j] * mat[i][j];
                        }
            cout << mat[i][j] << " ";
                    }
                    cout << endl;
             }


}
