#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);

    int num_atletas;
    cin >> num_atletas;

    vector<int> posicoes(num_atletas);

    for(int i = 0; i < num_atletas; i++){
        cin >> posicoes[i];
    }

    vector<pair<int, int>> posicoes_com_indice;

    for (int i = 0; i < num_atletas; i++) {
        posicoes_com_indice.push_back({posicoes[i], i});
    }

    sort(posicoes_com_indice.begin(), posicoes_com_indice.end());

    for (auto indice : posicoes_com_indice) {
        cout << indice.second + 1 << endl;
    }
    return 0;

}