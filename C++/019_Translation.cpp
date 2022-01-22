#include <bits/stdc++.h>
using namespace std;
int main() {
    string s, t, r;
    cin >> s >> t;
    r = s;
    if (s.length() == t.length()) {
        for (int i = 0; i < s.length(); i++) {
            r[i] = s[s.length() - 1 - i];
        }
        if (r == t) {
            cout << "YES";
        } else {
            cout << "NO";
        }
    } else {
        cout << "NO";
    }
    return 0;
}