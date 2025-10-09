#include <bits/stdc++.h>
using namespace std;

/*
 * Problem Link: https://codeforces.com/contest/2145/problem/C
*/

//  TO SOLVE

void monocarpString(int n, string word) {
    int num_a = 0, num_b = 0;
    for(int i = 0; i < n; i++) {
        if(word[i] == 'a') {
            ++num_a;
        }
    }
    num_b = n - num_a;
    int diff = num_a - num_b;
    if(diff == 0) {
        cout << "0" << "\n";
        return;
    }
    if(num_a == 0 || num_b == 0) {
        cout << "-1" << "\n";
        return;
    }

    int k = 0;
    while(num_a != num_b) {
        if(word[k] == 'a' && num_a > 1) {
            num_a--;
        } else if(word[k] == 'b' && num_b > 1) {
            num_b--;
        }
        k++;
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
        string word;
        cin >> word;
        monocarpString(n, word);
    }

    return 0;
}
