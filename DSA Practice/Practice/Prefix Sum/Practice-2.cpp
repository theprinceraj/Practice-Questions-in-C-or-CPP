#include <bits/stdc++.h>
using namespace std;

/*
Problem Statement: Given an array of n integers, find if any index exists such that the sum of elements to its right is equal to the sum of elements to its left. If yes print the index, otherwise print “No Equilibrium”.

Examples:

Example 1:
Input: N = 5, array[] = {7,2,1,5,4}
Output: 2
Explanation: Sum of elements to the left of index 2 is 7+2=9 and to the right of index 2 is 5+4=9.

Example 2:
Input:  N=4, array[]={23,32,12,4}
Output: No Equilibrium
Explanation: No such index exists for which the sum to its right and left is equal
*/

void checkEquil(int arr[], int n) {
    int pSum[n];
    pSum[0] = arr[0];
    for(int i = 1; i < n; i++) {
        pSum[i] = pSum[i - 1] + arr[i];
    }

    for(int k = 0; k < n; k++) {

        int l_sum = k == 0 ? 0 : pSum[k - 1];
        int r_sum = k == 0 ? pSum[n - 1] : pSum[n - 1] - pSum[k];
        if(l_sum == r_sum) {
            cout << k << "\n";
            return;
        }
    }
    cout << "No Equilibrium\n";
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    checkEquil(arr, n);
}