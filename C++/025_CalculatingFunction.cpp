#include <bits/stdc++.h>
using namespace std;
int main() {
    long long int n, m, term, term1, negative = 0, positive = 0;
    cin >> n;
    m = n;
    if (n % 2 == 0) {
        term = (n - 2) / 2 + 1;
        positive = (term * (n + 2)) / 2;
    } else {
        n--;
        term = (n - 2) / 2 + 1;
        positive = (term * (n + 2)) / 2;
    }
    if (m % 2 == 0) {
        m--;
        term1 = (m - 1) / 2 + 1;
        negative = (term1 * (m + 1)) / 2;
    } else {
        term1 = (m - 1) / 2 + 1;
        negative = (term1 * (m + 1)) / 2;
    }
    cout << positive + (-1) * negative;
    return 0;
}