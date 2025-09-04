#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    int x;
    vector<int> v;
    int maior = 0;

    while(cin >> x){
        v.emplace_back(x);
        if(x > maior){
            maior = x;
        }
    }

    int counter = 0,counter1 = 0;
    vector<int> temporario;
    for(int i = 0; i < v.size(); i++){
        if(v[i] == maior){
            counter++;

        }
        if(v[i] != maior){
            temporario.push_back(v[i]);
        }
    }
    
    if(!temporario.empty()){
        auto max = max_element(temporario.begin(), temporario.end());
        maior = *max;
        for(int i = 0; i < temporario.size(); i++){
            if(temporario[i] == maior){
                counter1++;
            }
        }
    }
    cout << counter << " " << counter1 << endl;

    return 0;
}