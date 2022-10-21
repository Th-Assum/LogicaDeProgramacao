#include <iostream>
#include <iomanip>

using namespace std;
int main() {

    int x, y;

    cout << "Digite dois numeros:\n";
    cin >> x;
    cin >> y;

    while (x!=y){
        if (x > y){
        cout << "DESCRECENTE !"<<endl;
        }else {
        cout << "CRESCENTE ! " << endl;
        }
    cout << "Digite outros dois numeros :\n";
    cin >> x;
    cin >> y;
    }








}
