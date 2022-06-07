#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
    cin >> s;

    int total = 0;
    for (int i = 0; i < 3; i++) {
        if (s[i] == '1') {
            total++;
        }
    }

    cout << total;
}