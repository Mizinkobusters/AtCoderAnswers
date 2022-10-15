#include <iostream>
using namespace std;

long long comb(long long N, long long R) {
    long long ans = 1;
    for (long long i = N; i > N - R; i--) {
        ans *= i;
    }
    for (long long i = 1; i < R + 1; i++) {
        ans /= i;
    }
    return ans;
}

int main() {
    long long n, r;
    cin >> n >> r;

    cout << comb(n, r) << endl;
    return 0;
}