#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    string s;
    int n;
    cin >> n;
    cin >> s;

    stack<char> pilha;
    int fechar = 0;

    for(int i = 0 ; i < n ; i++){
        if(s[i] == '('){
            pilha.push(s[i]);
        }
        else{
            if(!pilha.empty() && pilha.top() == '('){
                pilha.pop();
            }
            else{
                fechar++;
            }
        }
    }

    int tam_pilha = pilha.size();
    
    string resultado = string(fechar, '(') + s + string(tam_pilha, ')');
    
    cout << resultado << endl;

    return 0;
}