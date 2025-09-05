#include <bits/stdc++.h>

using namespace std;

bool sobe(const vector<int> v){
    vector<int> up;
    for(int i = 0; i < v.size(); i++){
        if(v[i] <= 8){
            up.emplace_back(v[i]);
        }
        else{
            if(!up.empty() && v[i] - up.back() <= 8){
                up.emplace_back(v[i]);
            }
        }
    }
    if(v.size() == up.size()){
        return true;
    }else return false;
}

int main() {
    ios::sync_with_stdio(false);

    int qnt_blocos;
    cin >> qnt_blocos;

    vector<int> pesos(qnt_blocos);
    for(int i = 0; i < qnt_blocos; i++){
        cin >> pesos[i];
    }

    if(sobe(pesos)){
        cout << "S" <<endl;
    }else 
        cout << "N" <<endl;

    return 0;
}