#include <bits/stdc++.h>

using namespace std;

vector<int> found_zero(const vector<int>& v) {
    vector<int> indice_0;
    for (size_t i = 0; i < v.size(); i++) {
        if (v[i] == 0) {
            indice_0.emplace_back(i);
        }
    }
    return indice_0;
}
int main() {
    ios::sync_with_stdio(false);
    
    int qnt_quadrados;
    cin >> qnt_quadrados;

    vector<int> v(qnt_quadrados);

    for(int i = 0; i < qnt_quadrados; i++){
        cin >> v[i];
    }

    vector<int> indices_onde_tem_0 = found_zero(v);
    
    

    return 0;
}
