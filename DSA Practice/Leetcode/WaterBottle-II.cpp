#include <bits/stdc++.h>
using namespace std;

/*
 *
 *  Problem Link:
 *  https://leetcode.com/problems/water-bottles-ii/?envType=daily-question&envId=2025-10-02
 *
*/

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