/*
 * Water Bottles II | Medium | LeetCode 3100
 * https://leetcode.com/problems/water-bottles-ii/
 * Idea: simulate; each exchange costs numExchange empties, returns one bottle, and raises the cost by 1.
 * Time: O(sqrt(numBottles)) | Space: O(1)
 */

#include <bits/stdc++.h>
using namespace std;

int maxBottlesDrunk(int numBottles, int numExchange) {
    int drunk = numBottles;
    while(numBottles >= numExchange) {
        numBottles -= numExchange;
        drunk++;
        numExchange++;
        numBottles++;
    }
    return drunk;
}

int main() {
    int n;
    cout << "Enter number of fully filled bottles: ";
    cin >> n;

    int x;
    cout << "Enter value of numExchange: ";
    cin >> x;

    int ans = maxBottlesDrunk(n, x);

    cout << "Solution: " << ans;
    cout << endl;


    return 0;
}