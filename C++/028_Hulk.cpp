#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    string s = "";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        if (n == 1) {
            s += "I hate it";
        } else if (i == n && i % 2 == 0) {
            s += "I love it";
        } else if (i == n && i % 2 == 1) {
            s += "I hate it";
        } else if (i % 2 == 1) {
            s += "I hate that ";
        } else {
            s += "I love that ";
        }
    }
    cout << s;
    return 0;
}