#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

long long N, H[100009], dp[100009];



int main() {
    cin >> N;
    for (long long i = 1; i <= N; i++) cin >> H[i];

    for (long long i = 1; i <= N; i++) {
        if (i == 1) dp[i] = 0;
        if (i == 2) dp[i] = abs(H[i - 1] - H[i]);
        if (i >= 3) {
            dp[i] = min(dp[i - 1] + abs(H[i - 1] - H[i]), dp[i - 2] + abs(H[i - 2] - H[i]));
        }
    }
    cout << dp[N] << endl;
    return 0;
}