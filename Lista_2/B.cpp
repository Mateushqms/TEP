#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int N;
    cin >> N;
    vector<int> estoque(N);

    for (int i = 0; i < N; i++) {
        cin >> estoque[i];
    }

    int P, pedidos, vendas = 0;
    cin >> P;

    for (int i = 0; i < P; ++i) {
        cin >> pedidos;
        if (estoque[pedidos - 1] > 0) {
            estoque[pedidos - 1]--;
            vendas++;
        }
    }
    cout << vendas << endl;
    return 0;
}