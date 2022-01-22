#include <bits/stdc++.h>
using namespace std;
int main() {
    int room, eligroom = 0;
    cin >> room;
    int space[room][2];
    for (int i = 0; i < room; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> space[i][j];
        }
    }
    for (int i = 0; i < room; i++) {
        if (space[i][1] - space[i][0] >= 2) {
            eligroom += 1;
        }
    }
    cout << eligroom;
    return 0;
}