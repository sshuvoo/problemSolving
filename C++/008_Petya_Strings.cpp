#include <bits/stdc++.h>
using namespace std;
int main() {
    string s1, s2;
    int n = 0;
    cin >> s1 >> s2;
    for (int i = 0; i < s1.length(); i++) {
        if (tolower(s1[i]) == tolower(s2[i])) {
            n++;
        } else if (tolower(s1[i]) < tolower(s2[i])) {
            cout << -1;
            break;
        } else {
            cout << 1;
            break;
        }
    }
    if (n == s1.length()) {
        cout << 0;
    }
    return 0;
}