#include <iostream>

using namespace std;

int main(){

    ios::sync_with_stdio(false);

    int n;

    cin >> n;

    int num_pecas;

    num_pecas = ((n + 1) * (n + 2)) / 2;

    cout << num_pecas << endl;

    return 0;

}