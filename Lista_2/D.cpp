#include <bits/stdc++.h>

using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<int> fita(N);
    for (int i = 0; i < N; ++i) {
        cin >> fita[i];
    }

    vector<int> dist(N, 10000);

    for (int i = 0; i < N; ++i) {
        if (fita[i] == 0) {
            dist[i] = 0;
        } else if (i > 0) {
            dist[i] = dist[i - 1] + 1;
        }
    }

    for (int i = N - 2; i >= 0; --i) {
        if (fita[i] == 0) {
            dist[i] = 0;
        } else {
            dist[i] = min(dist[i], dist[i + 1] + 1);
        }
    }

    for (int i = 0; i < N; ++i) {
        if (dist[i] >= 9) {
            cout << 9 << " ";
        } else {
            cout << dist[i] << " ";
        }
    }
    cout << endl;

    return 0;
}