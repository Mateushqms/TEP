#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);

    int qnt_elementos;
    cin >> qnt_elementos;

    vector<pair<int,int>> v;
    int tamanho = 0; 

    for (int i = 0; i < qnt_elementos; i++) {
        int elementos;
        cin >> elementos;

        if (!v.empty() && v.back().first == elementos) {
            v.back().second++;
            tamanho++;

            if (v.back().second == elementos) {
                tamanho -= elementos;
                v.pop_back();
            }
        } else {
            v.push_back({elementos,1});
            tamanho++;
        }

        cout << tamanho << "\n";
    }

    return 0;
}
