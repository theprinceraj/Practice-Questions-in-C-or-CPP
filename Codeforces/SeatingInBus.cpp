#include <bits/stdc++.h>
using namespace std;

/*
 * Problem Link: https://codeforces.com/problemset/problem/2000/B
*/

void seatingInBus(int n, vector<int> seats) {
    vector<int> seatsOccupied(n);
    for(int i = 1; i < n - 1; i++) {
        bool validSeat = find(seatsOccupied.begin(), seatsOccupied.end(), i - 1) != seatsOccupied.end() || find(seatsOccupied.begin(), seatsOccupied.end(), i + 1) != seatsOccupied.end();
        if(!validSeat) {
            cout << "NO\n";
            return;
        }
        seatsOccupied[i] = seats[i];
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
