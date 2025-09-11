#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    
    int n; cin >> n;
    unordered_map<int,long long> openCnt, closeCnt;
    long long zeros = 0, res = 0;

    while (n--) {
        string s; cin >> s;
        int bal = 0, mn = 0;
        for (char c : s) {
            bal += (c == '(' ? 1 : -1);
            mn = min(mn, bal);
        }
        if (bal > 0 && mn >= 0) 
            openCnt[bal]++;
        else if (bal < 0 && mn >= bal) 
            closeCnt[-bal]++;
        else if (bal == 0 && mn >= 0) 
            zeros++;
    }

    res += zeros * zeros;
    for (auto &[k, v] : openCnt) 
        if (closeCnt.count(k)) 
            res += v * closeCnt[k];

    cout << res << "\n";
}
