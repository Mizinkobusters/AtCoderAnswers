#include <iostream>
using namespace std;

int main() {
    int N;
    char S[100];

    cin >> N;
    for (int i = 0; i < 50; i++) {
        cin >> S[i];
    }

    int count = 0;
    for (int i = 0; i < 100; i++) {
        if (S[i] == 'A') {
            if (S[i + 1] == 'B') {
                if (S[i + 2] == 'C') {
                    count++;
                }
            }
        }
    }

    cout << count << endl;
    return 0;
}