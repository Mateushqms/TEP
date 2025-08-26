#include <iostream> 
#include <vector>

using namespace std;

int main(){

    ios::sync_with_stdio(false);
    int dias, saldo_inicial, saldo;

    cin >> dias >> saldo_inicial;

    saldo = saldo_inicial;

    vector<int> saldos;
    saldos.push_back(saldo);

    while (dias--){
        int extrato;
        cin >> extrato;

        saldo += extrato;
        saldos.push_back(saldo);
    }

    int menor = saldos[0];
    for (size_t i = 1; i < saldos.size(); i++) {
        if (saldos[i] < menor) {
            menor = saldos[i];
        }
    }

    cout << menor << endl;

    return 0;
}