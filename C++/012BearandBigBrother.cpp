#include <bits/stdc++.h>
using namespace std;
int main() {
    int limak, bob, year = 0;
    cin >> limak >> bob;
    while (true) {
        limak *= 3;
        bob *= 2;
        year += 1;
        if (limak > bob) break;
    }
    cout << year;
    return 0;
}