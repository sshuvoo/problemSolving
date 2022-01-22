#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    int sl, u = 0, l = 0;
    cin >> s;
    sl = s.length();
    for (int i = 0; i < sl; i++) {
        if (isupper(s[i]) == 1) {
            u += 1;
        } else {
            l += 1;
        }
    }
    if (u > l) {
        for (int i = 0; i < sl; i++) {
            s[i] = toupper(s[i]);
        }
    } else {
        for (int i = 0; i < sl; i++) {
            s[i] = tolower(s[i]);
        }
    }
    cout << s;
    return 0;
}