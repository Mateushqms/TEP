#include <iostream>
#include <vector>
#include <algorithm> 

using namespace std;


int main(){

    ios::sync_with_stdio(false);

    int num_participantes, aprovados;
    cin >> num_participantes >> aprovados;

    vector<int> notas_participantes;
    int nota;

    for (int i = 0; i < num_participantes; ++i) {
        cin >> nota;
        notas_participantes.push_back(nota);
    }

    sort(notas_participantes.begin(), notas_participantes.end(), greater<int>());

    // for (int i = 0; i <notas_participantes.size(); ++i){
    //     cout << notas_participantes[i] << " ";
    // }
    // cout << endl;

    cout << notas_participantes[aprovados-1];
    cout << endl;
}