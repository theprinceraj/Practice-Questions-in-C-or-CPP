#include <bits/stdc++.h>
using namespace std;

/*
 * Problem Link: https://codeforces.com/contest/2145/problem/C

TEST CASE:
7
13
aaaababbaabab
12
bbbbabbaabaa
13
aabbaabbbbaab
11
abaaabababa
12
bbababaabbab
12
abbabababbba
11
aaabaaaaaba
OUTPUT:
3
2
1
3
2
2
9
*/
//  sliding window of length = 2 with (a:2, b:0)

int calcNumericValue(string str) {
    return str == 'a' ? 1 : -1;
}

void monocarpString(int n, string word) {
    int val_a = 1, val_b = -1;
    int offset = 0;
    for(int i = 0; i < n; i++) {
        int val = word[i] == 'a' ? val_a : val_b;
        offset += calcNumericValue(word[i]);
    }
    // checks if string contains all a's or all b's
    if(n == offset || n == abs(offset)) {
        cout << 0 << '\n';
    }

    int minSum = 0;
    for(int k = 0; k < n; k++) {
        int currSum = 0;
        int l = 0, r = abs(offset) - 1;
        while(l <= r) {
            currSum += word[k + l] == 'a' ? val_a : val_b;
            l++;
        }
        minSum = min(currSum, minSum);
    }
    if(minSum <= 0) {
        cout << -1 << '\n';
        return;
    }
    cout << minSum << '\n';

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
