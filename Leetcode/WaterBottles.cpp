/*
 * Water Bottles | Easy | LeetCode 1518
 * https://leetcode.com/problems/water-bottles/
 * Idea: simulate; each exchange turns numExchange empties into one new full bottle, repeat while enough remain.
 * Time: O(n / (e - 1)), n = numBottles, e = numExchange | Space: O(1)
 */

#include <bits/stdc++.h>
using namespace std;

int numWaterBottles(int numBottles, int numExchange) {
    int ans = numBottles;

    while(numBottles >= numExchange)  {
        numBottles -= numExchange;
        numBottles++;
        ans++;
    }

    return ans;
}

int main() {
    int n;
    cout << "Enter number of fully filled bottles: ";
    cin >> n;

    int x;
    cout << "Enter value of numExchange: ";
    cin >> x;

    int ans = numWaterBottles(n, x);

    cout << "Solution: " << ans;
    cout << endl;


    return 0;
}