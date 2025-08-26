#include <iostream>

using namespace std;

int main (){
    //Cibele > Camila > Celeste
    
    ios::sync_with_stdio(false);

    int A ,B ,C;

    cin >> A;
    cin >> B;
    cin >> C;

    int Camilia;

    if ((A >= B && A <= C) || (A <= B && A >= C)){
        Camilia = A;
    }
    else if ((B >= A && B <= C) || (B <= A && B >= C)){
        Camilia = B;
    }
    else{
        Camilia = C;
    }

    cout << Camilia << endl;

    return 0;

}