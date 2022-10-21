#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
 
long long n, k, h[100009], dp[100009];
 
int main () {
    cin >> n >> k;
    for (long long i = 1; i <= n; i++) cin >> h[i];
 
    dp[1] = 0;
    for (long long i = 2; i <= n; i++) {
        dp[i] = dp[i - 1] + abs(h[i - 1] - h[i]);
        for (long long j = 1; j <= k; j++) {
            if (i - j >= 1) {
                dp[i] = min(dp[i], dp[i - j] + abs(h[i - j] - h[i]));
            }
        }
    }
    cout << dp[n] << endl;
    return 0;
}