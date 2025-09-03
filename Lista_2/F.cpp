#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);

    int qnt_nums = 6;
    vector<int> nums_usuario(qnt_nums);
    
    for(int i = 0; i < qnt_nums; i++){
        cin >> nums_usuario[i]; 
    }

    vector<int> nums_vencedores(qnt_nums);
    for(int i = 0; i < qnt_nums; i++){
        cin >> nums_vencedores[i]; 
    }
    
    set<int> a_nums_usuarios(nums_usuario.begin(), nums_usuario.end());
    set<int> a_nums_vencedores(nums_vencedores.begin(), nums_vencedores.end());

    vector<int> intersecao;

    set_intersection(a_nums_usuarios.begin(),a_nums_usuarios.end(),
                     a_nums_vencedores.begin(),a_nums_vencedores.end(),
                    back_inserter(intersecao));


    // for(int i = 0; i < intersecao.size(); i++ ){
    //     cout << intersecao[i] << "\n";
    // }
    // cout << intersecao.size();
    int acertos = intersecao.size();

    if(acertos == 3){
        cout << "terno" << endl;
    }
    else if(acertos == 4){
        cout << "quadra" << endl;
    }
    else if(acertos == 5){
        cout << "quina" << endl;
    }
    else if(acertos == 6){
        cout << "sena" << endl;
    }
    else{
        cout << "azar" << endl;
    }

    return 0;
}