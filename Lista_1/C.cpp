#include <iostream>

using namespace std;

int main (){
    ios::sync_with_stdio(false);

    int a, b, c, d;

    cin >> a >> b >> c >> d;

    int notebook_total = (a - 3) + b + c + d;

    cout << notebook_total << endl;

    return 0;

}