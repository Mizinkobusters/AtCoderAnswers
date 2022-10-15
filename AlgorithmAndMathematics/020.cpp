#include <iostream>
using namespace std;

int main() {
    long long N, A[109];
    long long ans = 0;

    cin >> N;
    for (long long i = 1; i <= N; i++) {
        cin >> A[i];
    }

    for (long long i = 1; i <= N; i++) {
        for (long long j = i + 1; j <= N; j++) {
            for (long long k = j + 1; k <= N; k++) {
                for (long long l = k + 1; l <= N; l++) {
                    for (long long m = l + 1; m <= N; m++) {
                        if (A[i] + A[j] + A[k] + A[l] + A[m] == 1000) {
                            ans += 1;
                        }
                    }
                }
            }
        }
    }

    cout << ans << endl;
    return 0;
}