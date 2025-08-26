#include <iostream>

using namespace std;

int main(){
    int entrys = 6;
    char winOrLose;
    int countWin = 0;
    int countLose = 0;

    while (entrys--){
        cin >> winOrLose;

        if(winOrLose == 'V'){
            countWin++;
        } else {
            countLose++;
        }   
    }

    if (countWin >= 5){
        cout << 1 << endl;
    }
    else if (countWin >=3){
        cout << 2 << endl;
    }
    else if (countWin >=1){
        cout << 3 << endl;
    }
    else{
        cout << -1 << endl;
    }
}