#include <bits/stdc++.h>
using namespace std;

/*
 * Problem Link: https://codeforces.com/contest/2114/problem/A
*/

int processYearParts(string year) {
    vector<int> num(4);
    for(int i = 0; i < year.size(); i++) {
        int numAscii = year[i];
        int digit = numAscii - 48;
        num[i] = digit;
    }
    return num[0] * 1000 + num[1] * 100 + num[2] * 10 + num[3];
}

void squareYear(string year) {
    int yearNum = processYearParts(year);
    for(int i = 0; i < 100; i++) {
        for(int j = 0; j < 100; j++) {
            int res = (i + j) * (i + j);
            if(res == yearNum) {
                cout << i << " " << j << "\n";
                return;
            }
        }
    }
    cout << -1 << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
        string year;
        cin >> year;
        squareYear(year);
    }
}