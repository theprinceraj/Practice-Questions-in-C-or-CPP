/*
 * Seating in Bus | Codeforces 2000B
 * https://codeforces.com/problemset/problem/2000/B
 * Idea: keep occupied seats in a hash map; every seat after the first needs an occupied neighbour (seat - 1 or seat + 1).
 * Time: O(n) per test (average) | Space: O(n)
 */

#include <bits/stdc++.h>
using namespace std;

void seatingInBus(int n, vector<int> seats) {
    unordered_map<int, bool> occupied;
    for(int i = 0; i < n; i++) {
        int seat = seats[i];
        if(i == 0) {
            occupied[seat] = true;
            continue;
        }
        bool prevFilled = occupied[seat - 1];
        bool nextFilled = occupied[seat + 1];
        bool search = prevFilled || nextFilled;
        if(!search) {
            cout << "NO\n";
            return;
        }
        occupied[seat] = true;
    }
    cout << "YES\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        vector<int> seats(n);
        for(int i = 0; i < n; i++) {
            cin >> seats[i];
        }

        seatingInBus(n, seats);

    }

    return 0;
}
