#include <bits/stdc++.h>
using namespace std;

/*
 * Problem Link: https://codeforces.com/problemset/problem/2000/B
*/

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
