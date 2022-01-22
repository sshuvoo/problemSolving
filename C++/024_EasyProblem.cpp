#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    bool flag = 0;
    cin >> n;
    int A[n];
    for (int i = 0; i < n; i++) {
        cin >> A[i];
        if (A[i] == 1) {
            flag = 1;
        }
    }
    if (flag == 1) {
        cout << "HARD";
    } else {
        cout << "EASY";
    }
    return 0;
}