#include <iostream>
using namespace std;

int main () {
    int N;
    int B[100009], R[100009];
    cin >> N;

    for (int i = 1; i <= N; i++) {
        cin >> B[i];
    }
    for (int i = 1; i <= N; i++) {
        cin >> R[i];
    }

    double blue = 0.0, red = 0.0;
    for (int i = 1; i <= N; i++) {
        blue += 1.0 * B[i] / N;
        red  += 1.0 * R[i] / N;
     }

     cout << fixed << blue + red << endl;
     return 0;
}