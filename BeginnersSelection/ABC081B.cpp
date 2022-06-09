#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[200];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int count = 0;
    while (true) {
        bool existOdd = false;
        for (int i = 0; i < n; i ++) {
            if (a[i] % 2 != 0) {
                existOdd = true;
            }
        }

        if (existOdd) {
            break;
        }

        for (int i = 0; i < n; i ++) {
            a[i] /= 2;
        }
        count++;
    }
    cout << count << endl;
}