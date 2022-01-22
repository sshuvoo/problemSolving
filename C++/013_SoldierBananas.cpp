#include <bits/stdc++.h>
using namespace std;
int main() {
    int cost, dollar, banana, borow, sum = 0;
    cin >> cost >> dollar >> banana;
    for (int i = 1; i <= banana; i++) {
        sum += cost * i;
    }
    borow = 0;
    if (dollar < sum) borow = sum - dollar;
    cout << borow;
    return 0;
}