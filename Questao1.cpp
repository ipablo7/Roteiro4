#include <iostream>

using namespace std;

int main (void){
    int num, maior, menor;
    cout << "Digite um numero: " << endl;
    cin >> num;
    maior = num;
    while(menor != 0){
        cout << "Digite outro numero: " << endl;
        cin >> menor;
        if(maior < menor){
            maior = menor;
        }
    }
    cout << "O maior numero eh: " << maior << endl;
    return 0;
}
