#include <iostream>

using namespace std;

int main(){

    int D, E;

    cin >> E;
    cin >> D;

    int result;

    if (E > D){
        result = E+D;
    }
    else{
        result = 2*(D-E);
    }

    cout << result << endl;
    
    return 0;
}