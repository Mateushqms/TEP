#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);

    int sequencia;
    cin >> sequencia;
    vector<int> v(sequencia);

    for(int i = 0; i < sequencia; i++){
        cin >> v[i];
    }

    for(int i = 1 ; i < sequencia - 1; i++){
        if(v[i - 1] > v[i] && v[i] < v[i+1]){
            cout << "S" << endl; 
            return 0;
        }
    }

    cout << "N" << endl;
    return 0;

}
