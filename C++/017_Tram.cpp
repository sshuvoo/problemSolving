#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, max;
    cin >> n;
    int a[n + 1][2], b[n + 1];
    b[0] = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= 2; j++) {
            cin >> a[i][j];
        }
        b[i] = b[i - 1] + abs(a[i][1] - a[i][2]);
    }
    for (int i = 0; i < n; i++) {
        if (b[i] > b[0]) {
            max = b[i];
        } else {
            max = b[0];
        }
    }
    cout << max;
    return 0;
}