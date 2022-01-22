#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin >> s;
    int sl = s.length();
    int lucky = 0, nlucky = 0;
    for (int i = 0; i < sl; i++) {
        if (s[i] == '4' || s[i] == '7') {
            lucky += 1;
        } else {
            continue;
        }
    }
    string lstring = to_string(lucky);
    int lsl = lstring.length();
    for (int i = 0; i < lsl; i++) {
        if (lstring[i] == '4' || lstring[i] == '7') {
            nlucky += 1;
        } else {
            continue;
        }
    }
    if (lsl == nlucky) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}