/*
 * Candies for Nephew | Codeforces 2145A
 * https://codeforces.com/contest/2145/problem/A
 * Idea: bump n by 1 until it is divisible by 3 and count the bumps (at most 2).
 * Time: O(1) per test | Space: O(1)
 */

#include <bits/stdc++.h>
using namespace std;

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
