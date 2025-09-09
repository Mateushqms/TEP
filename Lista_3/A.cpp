#include <bits/stdc++.h>

using namespace std;

// template<typename T>

// class MonoStack {
//     public:
//     void push(const T& x)
//     {
//         while(not st.empty() and st.top() > x)
//             st.pop();
        
//         st.emplace(x);
//     }

//     void pop(){
//         st.pop();
//     };
//     auto top() const{
//         return st.top();
//     };
//     bool empty() const{
//         return st.empty();
//     };
//     private:
//         stack<T> st;
// };

// template<typename T>
// ostream& operator<<(ostream& os, const MonoStack<T>& ms)
// {
//     auto temp(ms);

//     while(!temp.empty())
//     {
//         cout << temp.top() << ' ';
//         temp.pop();
//     }
//     return os;
// }

int main(){
    ios::sync_with_stdio(false);

    int N;
    cin >> N;

    string s;
    cin >> s;

    stack<int> pilha;

    for(int i = 0; i < N; i++){
        if(!pilha.empty() && pilha.top() != s[i]){
            pilha.pop();
        }
        else{
            pilha.push(s[i]);
        }
    }

    cout << pilha.size() << endl;

    return 0;
}