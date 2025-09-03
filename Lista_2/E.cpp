#include <bits/stdc++.h>

using namespace std;


int main() {
    ios::sync_with_stdio(false);

    int qnt_bolas;
    cin >> qnt_bolas;

    vector<int> v(qnt_bolas);
    int base = qnt_bolas;

    for(int i = 0; i < qnt_bolas; i++){
        cin >> v[i];
    }

    while(v.size() > 1)
    {
        vector<int> next;
        for(int i = 0; i < v.size() - 1; i++){
            if ((v[i] == 1 && v[i+1] == 1) || (v[i] == -1 && v[i+1] == -1)){
                next.emplace_back(1);
            }
            else next.emplace_back(-1);                
        }
        v = next;
    }

    // for(int i = 0; i < v.size(); i++){
    //     cout << v[i];
    // }
    //     cout << "\n" << v.size() << "\n";
    
    if(v.back() == 1){
        cout << "preta" << endl;
    }
    else{
        cout << "branca" << endl;
    }
    return 0;
}