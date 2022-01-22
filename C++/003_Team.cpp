#include <iostream>
using namespace std;
int main() {
    int t, fsum = 0;
    cin >> t;
    int fobj[t];
    for (int i = 1; i <= t; i++) {
        int obj[i][3], sum = 0;
        for (int j = 1; j <= 3; j++) {
            cin >> obj[i][j];
            sum += obj[i][j];
        }
        if (sum < 2) {
            fsum += 0;
        } else {
            fsum += 1;
        }
    }
    cout << fsum;
    return 0;
}