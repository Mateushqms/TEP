#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);

    int querys;
    cin >> querys;

    deque<pair<long long, long long>> fila;

    while (querys--) {
        int type;
        cin >> type;

        if (type == 1) {
            long long x, c;
            cin >> x >> c;
            fila.emplace_back(x, c);  
        } else {
            long long c;
            cin >> c;
            long long sum = 0;

            while (c > 0) {
                auto &[valor, qnt] = fila.front(); // o mesmo que fazer (auto &p = dq.front();) (auto &valor = p.first;) (auto &qnt = p.second;)

                if (qnt <= c) {  
                    sum += valor * qnt;
                    c -= qnt;
                    fila.pop_front();
                } else {  
                    sum += valor * c;
                    qnt -= c;
                    c = 0;
                }
            }

            cout << sum << "\n";
        }
    }

    return 0;
}
