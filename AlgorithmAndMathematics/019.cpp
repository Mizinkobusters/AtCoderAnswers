#include <iostream>
#include <vector>
using namespace std;

int main () {
    long long n;
    cin >> n;

    vector<long long> a(n);
    for (long long i = 0; i < n; i++) {
        cin >> a[i];
    }

    long long x, y, z;
    x = y = z = 0;

    for (long long j : a) {
        if (j == 1) {
            x++;
        } else if (j == 2) {
            y++;
        } else if (j == 3) {
            z++;
        } 
    }

    long long ans = (x * (x - 1) / 2) + (y * (y - 1) / 2) + (z * (z - 1) / 2);
    cout << ans << endl;
}