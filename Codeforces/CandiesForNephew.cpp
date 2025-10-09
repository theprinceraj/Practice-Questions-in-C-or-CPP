#include <bits/stdc++.h>
using namespace std;

/*
 * Problem Link: https://codeforces.com/contest/2145/problem/A
*/

void candiesForNephew(int n) {
    int k = 0;
    while(n % 3 != 0) {
        k++;
        n++;
    }
    cout << k << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        candiesForNephew(n);
    }

    return 0;
}
