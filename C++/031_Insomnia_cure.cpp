#include <bits/stdc++.h>
using namespace std;
int main() {
    int k, l, m, n, d, p = 0;
    cin >> k >> l >> m >> n >> d;
    string sum[d * 4];
    if (k == 1 || l == 1 || m == 1 || n == 1) {
        cout << d;
    } else {
        for (int i = 2; i <= d; i++) {
            if (i % k == 0) {
                sum[p] = i;
                p++;
            }
        }
        if (k != l) {
            for (int i = 2; i <= d; i++) {
                if (i % l == 0) {
                    sum[p] = i;
                    p++;
                }
            }
        }
        if (k != m && l != m) {
            for (int i = 2; i <= d; i++) {
                if (i % m == 0) {
                    sum[p] = i;
                    p++;
                }
            }
        }
        if (k != n && l != n && m != n) {
            for (int i = 2; i <= d; i++) {
                if (i % n == 0) {
                    sum[p] = i;
                    p++;
                }
            }
        }
    }
    for (int i = 0; i < p; i++) {
        cout << sum[i] << endl;
    }

    return 0;
}