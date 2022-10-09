#include <iostream>
#include <string>
using namespace std;

int main() {
    int N;
    cin >> N;

    int ans = 0;
    for (int i = 1; i <= N; i++) {
        string S = to_string(i);
        if (S.length() % 2 != 0) {
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}