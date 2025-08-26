#include <iostream>

using namespace std;

int main(){
    int capacidade, fator, num_bacterias = 1, dias = 0;

    cin >> capacidade;
    cin >> fator;


    while(num_bacterias <= capacidade){
        num_bacterias *= fator;
        dias++;
    }

    cout << dias-1;

    return 0;
}