#include <iostream>
using namespace std;

int main() {
    long long N, M, T;
    long long A[100009];
    long long bonus[100009];

    cin >> N >> M >> T;

    for (int i = 1; i < N; i++) {
        cin >> A[i];
    }

    for (int i = 0; i < M; i++) {
        long long X, Y;
        cin >> X >> Y;
        bonus[X] = Y;
    }

    for (int i = 1; i < N; i++) {
        if (T <= A[i]) {
            cout << "No" << endl;
            return 0;
        }

        T -= A[i];
        T += bonus[i + 1];
    }
    cout << "Yes" << endl;
    return 0;
}