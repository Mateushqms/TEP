#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);

    int hori, verti;

    cin >> hori >> verti;
    string s;
    vector<int> indice, coluna;
    int j = 0;

    while(hori--){
        cin >> s;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == 'o'){
                indice.emplace_back(i);
                coluna.emplace_back(j);
            }
        }   
        j++;
    }
    int a = abs(indice[1] - indice[0]);
    int b = abs(coluna[0] - coluna[1]);
    int result = a+b;
    cout << result << endl;
    return 0;
}