#include <bits/stdc++.h>
using namespace std;
int main() {
    int s[4], n = 0;
    for (int i = 0; i < 4; i++) {
        cin >> s[i];
    }
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (s[i] == s[j] && i > j) {
                break;
            } else if (s[i] == s[j] && i < j) {
                n++;
            }
        }
    }
    cout << n;
    return 0;
}
