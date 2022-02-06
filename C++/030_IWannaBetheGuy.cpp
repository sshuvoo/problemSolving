#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, p, k = 0;
    cin >> n >> p;
    int X[p], Y[p];
    for (int i = 0; i < p; i++) {
        cin >> X[i];
    }
    for (int i = 0; i < p; i++) {
        cin >> Y[i];
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < p; j++) {
            if (X[j] == i || Y[j] == i) {
                k++;
                break;
            }
        }
    }
    if (k == n) {
        cout << "I become the guy.";
    } else {
        cout << "Oh, my keyboard!";
    }
    return 0;
}