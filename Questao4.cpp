#include <iostream>

using namespace std;

float Percentual(int votos, int total)
{
    return (((float)votos/(float)total)*100);
}

int main()
{
    int jogador[23], num_jogador, votos, i,aux, melhor_jogador,maior;
    float maior_percent;

    votos = 0;
    maior = 0;
    maior_percent = 0.0;

    cout <<"\t####### ENQUETE #######\n"
           "\n    Qual o melhor jogador da partida?    \n"
           "(Observe: Digite 0 para encerrar o programa)\n\n";

    for(i=0; i<23; i++)
    {
        jogador[i] = 0; /* Iniciar todos os jogadores com votos igual a 0 */
    }

    while(1)
    {
        cout << "Numero do jogador: ";
        cin >> num_jogador;

        if(num_jogador == 0)
            break;
        else if(num_jogador > 23)
            cout << "Numero invalido! Digite de 1 a 23." << endl;
            else
            {
                jogador[num_jogador - 1]++;
                votos++;
            }
    }

    cout << "\nRESULTADO DA VOTACAO: \n"
           "\nForam computados " << votos << " votos:"<< endl;

    for(i=0; i<23; i++)
    {
        if(jogador[i] != 0)
            cout << "Jogador numero ["<< i+1 <<"] " << "recebeu: \t" << jogador[i] << " voto(s)\t%" << Percentual(jogador[i],votos) << endl;
    }

    for(i=0; i<23; i++)
    {
        if(jogador[i] != 0)
        {
            maior = jogador[i];
            maior_percent = Percentual(jogador[i],votos);
        }
    }

    melhor_jogador = jogador[0];

    for(i=1; i<23; i++)
    {
        if(melhor_jogador < jogador[i])
        {
            melhor_jogador = jogador[i];
            aux = i+1;
        }

    }

    cout << "\nO melhor jogador escolhido foi numero [" << aux << "]" << " com " << melhor_jogador << " votos" <<
    " que corresnpode a %" << maior_percent << " do total de votos." << endl;


    return 0;

}
