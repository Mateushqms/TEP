#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);

    string s;

    cin >> s;

    stack<char> pilha;
    int counter = 0;
    int aux = 0;

    for(int i = 0; i < s.size(); i++){
        if(!pilha.empty() && s[i] == ')' && pilha.top() == '('){
            pilha.pop();
            counter++;
        }
        else {
            pilha.push(s[i]);
        }
        cout << counter << '\n';

    }
    cout << counter << ' ';

    // int aux = counter;

    // counter = 0;

    // int counter1 = 0;

    // while (!pilha.empty()) {
    //     pilha.pop();  
    // }

    // for(int i = 0; i < s.size(); i++){
    //     if(counter == aux){
    //         counter1++;
    //         counter = 0;
    //     }
    //     if(!pilha.empty() && s[i] == ')' && pilha.top() == '('){
    //         pilha.pop();
    //         counter++;
    //     }
    //     else {
    //         pilha.push(s[i]);
    //     }
    // }
    // cout << counter1;
    

    return 0;
}