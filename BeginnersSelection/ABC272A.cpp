#include <iostream>
#include <vector>
using namespace std;

int main() {
    long long n;
    cin >> n;

    vector<long long> a(n);
    for (long long i = 0; i < n; i++) {
        cin >> a[i];
    }

    long long ans = 0;
    for (long long x : a) {
        ans += x;
    }

    cout << ans << endl;
    return 0;
}