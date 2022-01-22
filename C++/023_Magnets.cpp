#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, groups = 1;
    cin >> n;
    string magnets[n];
    for (int i = 0; i < n; i++) {
        cin >> magnets[i];
    }
    for (int i = 0; i < n; i++) {
        if (i + 1 == n) break;
        if (magnets[i] != magnets[i + 1]) {
            groups++;
        }
    }
    cout << groups;
    return 0;
}
