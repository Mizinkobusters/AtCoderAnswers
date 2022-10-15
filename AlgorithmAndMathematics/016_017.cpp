#include <iostream>
using namespace std;

long long GCD(long long A, long long B) {
    while (A >= 1 && B >= 1) {
        if (A < B) {
            B = B % A;
        } else {
            A = A % B;
        }
    }
    if (A >= 1) {
        return A;
    }
    return B;
}

long long LCM(long long A, long long B) {
    long long X = GCD(A, B);
    return A / X * B;
}

int main() {
    long long N;
    long long A[100009];

    cin >> N;
    for (long long i = 0; i < N; i++) {
        cin >> A[i];
    }

    long long ans = LCM(A[0], A[1]);
    for (long long i = 2; i < N; i++) {
        ans = LCM(ans, A[i]);
    }

    cout << ans << endl;
    return 0;
}
