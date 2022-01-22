#include <iostream>
using namespace std;
int main() {
    int n, k, sum = 0;
    cin >> n >> k;
    int obj[n];
    for (int i = 0; i < n; i++) {
        cin >> obj[i];
    }
    for (int i = 0; i < n; i++) {
        if (obj[i] >= obj[k-1] && obj[i] > 0) {
            sum += 1;
        }
    }
    cout << sum;
    return 0;
}