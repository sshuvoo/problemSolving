#include <bits/stdc++.h>
using namespace std;
int main() {
    int y;
    cin >> y;
    while (true) {
        y += 1;
        string year = to_string(y);
        int flag = year.length();
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                if (year[i] == year[j] && i > j) {
                    break;
                } else if (year[i] == year[j] && i < j) {
                    flag -= 1;
                } else {
                    continue;
                }
            }
        }
        if (flag == 4) {
            cout << year;
            break;
        } else {
            continue;
        }
    }
    return 0;
}