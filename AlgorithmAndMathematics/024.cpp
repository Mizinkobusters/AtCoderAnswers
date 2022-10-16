#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;

    long long p[59], q[59];
    for (long long i = 1; i <= n; i++) {
        cin >> p[i] >> q[i];
    }

    double ans = 0.0;
    for (long long i = 1; i <= n; i++) {
        ans += 1.0 * q[i] / p[i];
    }

    cout << fixed << ans << endl;
    return 0;
}