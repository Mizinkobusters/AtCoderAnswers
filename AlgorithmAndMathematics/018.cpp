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

    long long w, x, y, z;
    w = x = y = z = 0;

    for (long long j : a) {
        if (j == 100) {
            w++;
        } else if (j == 200) {
            x++;
        } else if (j == 300) {
            y++;
        } else if (j == 400) {
            z++;
        }
    }

    cout << w * z + x * y << endl;
    return 0;
}