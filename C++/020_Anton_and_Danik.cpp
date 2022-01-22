#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, anton = 0, danik = 0, tie = 0;
    string s;
    cin >> n >> s;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'A') {
            anton++;
        } else if (s[i] == 'D') {
            danik++;
        } else {
            continue;
        }
    }
    if (anton > danik) {
        cout << "Anton";
    } else if (danik > anton) {
        cout << "Danik";
    } else {
        cout << "Friendship";
    }
    return 0;
}