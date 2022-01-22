#include <bits/stdc++.h>
using namespace std;
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n, o;
        cin >> n >> o;
        int A[n];
        for (int i = 0; i < n; i++) {
            cin >> A[i];
        }
        string operBox[o][3];
        for (int j = 0; j < o; j++) {
            for (int i = 0; i < 3; i++) {
                cin >> operBox[j][3];
            }
        }

        for (int j = 0; j < o; j++) {
            if (operBox[j][0] == "S") {
                for (int i = 0; i < n; i++) {
                    A[i] += stoi(operBox[j][1]);
                }
            }
        }
        cout << "Case " << T << ":" << endl;
        for (int i = 0; i < n; i++) {
            if (i != n - 1) {
                cout << A[i] << " ";
            } else {
                cout << A[i];
            }
        }
        cout << endl;
    }
    return 0;
}