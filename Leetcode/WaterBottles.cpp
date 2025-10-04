#include <bits/stdc++.h>
using namespace std;

/*
 *
 *  Problem Link:
 *  https://leetcode.com/problems/water-bottles/
 *
*/

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