/*
 * Longest Good Array | Codeforces 2008C
 * https://codeforces.com/problemset/problem/2008/C
 * Idea: greedily add elements whose gaps grow 1, 2, 3, ... while the value stays <= r; count them.
 * Time: O(sqrt(r - l)) per test | Space: O(1)
 */

#include <bits/stdc++.h>
using namespace std;

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
