#include <bits/stdc++.h>

using namespace std;

int solution(vector<int>& vetor, int n){

    vector<int> aux(n + 1 , 0);
    for (const auto& x : vetor){
        if (1 <= x && x <= n){
            aux[x] = 1;
        }
    }
    int total = accumulate(aux.begin(), aux.end(), 0);

    return n - total;
}

int main (){

    int n;
    cin >> n;

    vector<int> vetor(n);

    for (auto& x : vetor) cin >> x;
    
    cout << solution(vetor, n) << "\n";

    return 0;
}