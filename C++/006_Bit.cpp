#include <iostream>
using namespace std;
int main() {
    int n, X = 0;
    cin >> n;
    string obj[n];
    for (int i = 0; i < n; i++) {
        cin >> obj[i];
        if (obj[i] == "X++") {
            X++;
        }
        if (obj[i] == "X--") {
            X--;
        }
        if (obj[i] == "++X") {
            ++X;
        }
        if (obj[i] == "--X") {
            --X;
        }
    }
    cout << X;
    return 0;
}