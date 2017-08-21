#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

int main()

{
    int aleatorio, achei;

    srand(time(0));
    aleatorio = rand()%100 + 1;

    while(aleatorio != achei)
    {
        cout << "Informe um numero: ";
        cin >> achei;

        if(achei < aleatorio)
            cout << endl << "Numero muito baixo!!!"<< endl;
        else
            if(achei > aleatorio)
            cout << endl << "Numero muito alto!!!" << endl;
    }

    cout << endl<< "" <<achei<< " !!! Parabens voce acertou !!!!" << endl;


    return 0;


}
