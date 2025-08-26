#include <iostream>

using namespace std;

int equilibrio(int a, int b, int c, int d) {
    int total1 = a * b;
    int total2 = c * d;

    if (total1 == total2) {
        return 0;
    } else if (total1 > total2) {
        return -1;
    } else {
        return 1;
    }
}

int main(){

    int P1,C1,P2,C2;

    cin >> P1 >> C1 >> P2 >> C2;

    cout << equilibrio(P1,C1,P2,C2);

    return 0;

}