#include <bits/stdc++.h>
using namespace std;
int main() {
    string s, news = "";
    int n1 = 0, n2 = 0, n3 = 0;
    cin >> s;
    int sl = s.length();
    for (int i = 0; i < sl; i++) {
        if (s[i] == '1') {
            n1 += 1;
        } else if (s[i] == '2') {
            n2 += 1;
        } else if (s[i] == '3') {
            n3 += 1;
        } else {
            n1 += 0;
        }
    }
    for (int i = 1; i <= n1; i++) {
        if (i == 1) {
            news += "1";
        } else {
            news += "+1";
        }
    }
    for (int i = 1; i <= n2; i++) {
        if (news == "") {
            news += "2";
        } else {
            news += "+2";
        }
    }
    for (int i = 1; i <= n3; i++) {
        if (news == "") {
            news += "3";
        } else {
            news += "+3";
        }
    }
    cout << news;
    return 0;
}