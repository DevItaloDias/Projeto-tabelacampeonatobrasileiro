#include <iostream>

using namespace std;

const int n_times = 20;
const int n_rodadas = 38;

struct times {
    string nome;
    int pontos;
};

void inserir_times(times time[]) {
    cout << "Times para a Tabela:" << endl;
    for (int i = 0; i < n_times; i++) {
        cout << "Time " << i + 1 << ": ";
        cin >> time[i].nome;
    }
}

void pontuacaotimes(times time[], int matriz[][n_rodadas]) {
    cout << "Pontuacao das partidas (3 - vitoria, 1 - empate e 0 - derrota)" << endl;
    for (int l = 0; l < n_times; l++) {
        for (int c = 0; c < n_rodadas; c++) {
            cout << "Rodada " << c + 1 << " | pontuacao do time " << time[l].nome << ": ";
            cin >> matriz[l][c];

            while(matriz[l][c]!=0 && matriz[l][c]!=1 && matriz[l][c]!=0){
                cout << "Pontuacao invalida. Digite novamente: (3-Vitoria | 1- Empate | 0- Derrota)";
                cin >> matriz[l][c];
            }
        }
    }
}

void pontuacaofinal(const times time[], const int matriz[][n_rodadas], times tabela[]) {
    for (int l = 0; l < n_times; l++) {
        tabela[l].nome = time[l].nome;
        tabela[l].pontos = 0;
        for (int c = 0; c < n_rodadas; c++) {
            if (matriz[l][c] == 3) {
                tabela[l].pontos += 3;
            } else if (matriz[l][c] == 1) {
                tabela[l].pontos += 1;
            } else {
                tabela[l].pontos += 0;
            }
        }
    }
}

void ordenar(times tabela[]) {
    for (int l = 0; l < n_times - 1; l++) {
        for (int c = 0; c < n_times - l - 1; c++) {
            if (tabela[c].pontos < tabela[c + 1].pontos) {
                times temporario = tabela[c];
                tabela[c] = tabela[c + 1];
                tabela[c + 1] = temporario;
            }
        }
    }
}

void resultados(const times tabela[]) {
    cout << "\n" << "Classificacao final: " << endl;
    for (int i = 0; i < n_times; i++) {
        cout << tabela[i].nome << ": " << tabela[i].pontos << " pontos" << endl;
    }
}

int main() {
    times time[n_times];
    int pontuacoes[n_times][n_rodadas];
    times tabela[n_times];

    inserir_times(time);
    pontuacaotimes(time, pontuacoes);
    pontuacaofinal(time, pontuacoes, tabela);
    ordenar(tabela);
    resultados(tabela);

    return 0;
}
