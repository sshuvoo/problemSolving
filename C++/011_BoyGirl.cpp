#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    int sl;
    cin >> s;
    sl = s.length();
    int min = sl;
    cout << min << endl;
    for (int i = 0; i < sl; i++) {
        for (int j = 0; j < sl; j++) {
            if (s[i] == s[j] && i > j) {
                break;
            } else if (s[i] == s[j] && i < j) {
                min -= 1;
            } else {
                continue;
            }
        }
    }
    cout << min << endl;
    if (min % 2 == 0) {
        cout << "CHAT WITH HER!";
    } else {
        cout << "IGNORE HIM!";
    }
    return 0;
}
