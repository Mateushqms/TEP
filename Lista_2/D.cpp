#include <bits/stdc++.h>

using namespace std;

vector<int> found_zero(const vector<int>& v) {
    vector<int> indice_0;
    for (size_t i = 0; i < v.size(); i++) {
        if (v[i] == 0) {
            indice_0.emplace_back(i);
        }
    }
    return indice_0;
}
int main() {
    ios::sync_with_stdio(false);
    
    int qnt_quadrados;
    cin >> qnt_quadrados;

    vector<int> v(qnt_quadrados);

    for(int i = 0; i < qnt_quadrados; i++){
        cin >> v[i];
    }

    vector<int> indices_onde_tem_0 = found_zero(v);

    //-1 0 -1 -1 -1 -1 -1 -1 -1 -1 0 -1 -1
    // 1 - 10 = 4 
    //0 -1 -1 -1 -1 -1 -1 -1 0
    //0 8 /2 = 4  
    /*o que pode ser feito??
    eu posso verificar os da esquerda do primeiro NÃO DA ERRO
    eu posso pintar os da direita com os respectivos números até encontrar um 0
    se eu encontrar um zero agora eu verifico a esquerda do novo 0 se os da esquerda será preenchido com um número maior ou igual eu não pinto o quadrado
    1 0 1 2 3 4 3 2 1 0
    */
    
    

    return 0;
}
