#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

int main (){
    int aleatorio, q, n1 = 0, n2 = 0, n3 = 0, n4 = 0, n5 = 0, n6 = 0;
    float porcentagem = 0;
    cout << "Digite um numero: " << endl;
    cin >> q;
    int dados[q];

    srand(time(0));
    if(q != 0){
          for(int i = 0; i < q; i++){
              aleatorio = (rand()%6) + 1;
              dados[i] = aleatorio;
              cout << dados[i] << endl;
              if (dados[i] == 1){
                    n1++;
              }
              if (dados[i] == 2){
                    n2++;
              }
              if (dados[i] == 3){
                    n3++;
              }
              if (dados[i] == 4){
                    n4++;
              }
              if (dados[i] == 5){
                    n5++;
              }
              if (dados[i] == 6){
                    n6++;
              }

        }
            porcentagem = (100*n1)/q;
              cout << "1-" << porcentagem << "%" << endl;
              porcentagem = (100*n2)/q;
              cout << "2-" << porcentagem << "%" << endl;
              porcentagem = (100*n3)/q;
              cout << "3-" << porcentagem << "%" << endl;
              porcentagem = (100*n4)/q;
              cout << "4-" << porcentagem << "%" << endl;
              porcentagem = (100*n5)/q;
              cout << "5-" << porcentagem << "%" << endl;
              porcentagem = (100*n6)/q;
              cout << "6-" << porcentagem << "%" << endl;
    }
    return 0;

}

