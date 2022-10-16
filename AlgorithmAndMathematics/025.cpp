#include <iostream>
using namespace std;

int main() {
    long long n;
    long long a[200009], b[200009];

    cin >> n;
    for (long long i = 1; i <= n; i++) {
        cin >> a[i];
    }
  
    for (long long i = 1; i <= n; i++) {
        cin >> b[i];
    }
 
    double atmp = 0.0;
    double btmp = 0.0;
    for (long long i = 1; i <= n; i++) {
        atmp += 1.0 * a[i] / 3;
        btmp += 1.0 * b[i] * 2 / 3;
    }
    cout << fixed << atmp + btmp << endl;
    return 0;
}