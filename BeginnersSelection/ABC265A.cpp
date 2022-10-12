#include <iostream>
using namespace std;

int main() {
    int X, Y, N;
    cin >> X >> Y >> N;

    int ans = 0;
    if (3 * X < Y) {
        ans = X * N;
    } else {
        ans = (N / 3) * Y + (N % 3) * X;
    }

    cout << ans << endl;
    return 0;
}