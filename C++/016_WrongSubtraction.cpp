#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, k, c = 0;
    cin >> n >> k;
    while (true) {
        if (n % 10 == 0) {
            n /= 10;
            c += 1;
        } else {
            n -= 1;
            c += 1;
        }
        if (c == k) break;
    }
    cout << n;
    return 0;
}