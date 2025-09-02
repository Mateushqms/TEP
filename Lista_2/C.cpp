#include <bits/stdc++.h>

using namespace std;


int main() {
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; ++i) 
        cin >> v[i];

    int base = v[0] + v[n - 1];

    for (int i = 0; i < (n + 1) / 2; ++i) {
        if (v[i] + v[n - 1 - i] != base) {
            cout << "N" << endl;
            return 0;
        }
    }

    cout << "S" << endl;
    return 0;
}