#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    string obj[t];
    for (int i = 0; i < t; i++) {
        cin >> obj[i];
    }
    for (int i = 0; i < t; i++) {
        if (obj[i].length() <= 10) {
            cout << obj[i] << endl;
        } else {
            cout << obj[i][0] << obj[i].length() - 2
                 << obj[i][obj[i].length() - 1] << endl;
        }
    }
    return 0;
}