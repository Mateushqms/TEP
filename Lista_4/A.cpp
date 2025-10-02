#include <bits/stdc++.h>

using namespace std;

int mult(int a){
    return a*2;
}

int add(int a, int constante){
    return a+constante;
}

int main(){
    ios::sync_with_stdio(false);

    int n,k;
    cin >> n;
    cin >> k;
    int inicio = 1;

    for(int i = 0; i < n; i++){
        if(mult(inicio) > add(inicio,k)){
            inicio = add(inicio,k);
        }
        else{
            inicio = mult(inicio);
        }
    }

    cout << inicio << endl;
}