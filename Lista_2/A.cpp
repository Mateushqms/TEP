#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);   
    int N, K;
    vector<int> v;

    cin >> N >> K;

    while (N--){
        int a;
        cin >> a;
        v.emplace_back(a);    
    }
    sort(v.begin(), v.end(), greater<int>());
    cout << v[K-1] << endl;

    return 0;
}