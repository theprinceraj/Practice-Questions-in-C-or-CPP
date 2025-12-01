#include <bits/stdc++.h>
using namespace std;

/*
 * Problem Link: https://codeforces.com/problemset/problem/2008/C
*/

void longestGoodArray(int l, int r) {
    int n = 0, diff = 0;
    while(l + diff <= r) {
        l += diff;
        diff++;
        n++;
    }
    cout << n << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
        int l, r;
        cin >> l;
        cin >> r;
        longestGoodArray(l, r);
    }

    return 0;
}
