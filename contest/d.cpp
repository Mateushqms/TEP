#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

long long somaMultiplos(long long n, long long x) {
    long long k = n / x;
    return x * k * (k + 1) / 2;
}

int main() {
    ios::sync_with_stdio(false);

    long long N, A, B;
    cin >> N >> A >> B;

    long long total = N * (N + 1) / 2;
    long long sumA = somaMultiplos(N, A);
    long long sumB = somaMultiplos(N, B);

    long long lcm = A / gcd(A, B) * B; 
    long long sumAB = somaMultiplos(N, lcm);

    cout << total - sumA - sumB + sumAB << "\n";
    return 0;
}
