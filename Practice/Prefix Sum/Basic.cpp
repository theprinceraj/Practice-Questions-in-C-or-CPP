#include <bits/stdc++.h>
using namespace std;

/*
URL: https://www.geeksforgeeks.org/dsa/understanding-prefix-sums#practical-examples-to-solidify-your-understanding
Given an array arr[] of integers and a list of queries queries[][], where each query is in the form [L, R], compute the sum of elements from index L to R (both inclusive) for each query.

Examples:

Input: arr[] = [2, 4, 6, 8, 10], queries[][] = [[1, 3], [0, 2]]
Output: [18, 12]
Explanation:
Query [1, 3] → 4 + 6 + 8 = 18
Query [0, 2] → 2 + 4 + 6 = 12

Input: arr[] = [5, 1, 3, 2], queries[][] = [[0, 1], [2, 3]]
Output: [6, 5]
Explanation:
Query [0, 1] → 5 + 1 = 6
Query [2, 3] → 3 + 2 = 5
*/

int* prefixSum(int arr[], int m, int queries[][2], int n, int result[]) {

    int pSum[m];
    pSum[0] = arr[0];
    for(int i = 1; i < m; i++) {
        pSum[i] = pSum[i - 1] + arr[i];
    }

    for(int k = 0; k < n; k++) {
        result[k] = pSum[queries[k][1]] - pSum[queries[k][0] - 1];
    }

    return result;
}

int main() {
    int m; // length of arr[]
    cin >> m;
    int arr[m];
    cout << "Enter elements of arr[]: ";
    for(int i = 0; i < m; i++) {
        cin >> arr[i];
    }

    int n; // length of queries[][]
    cin >> n;
    int queries[n][2];
    for(int i = 0; i < n; i++) {
        cout << "Enter element of queries[" << i << "][0]: ";
        cin >> queries[i][0];
        cout << "Enter element of queries[" << i << "][1]: ";
        cin >> queries[i][1];
    }

    int result[n];
    prefixSum(arr, m, queries, n, result);

    cout << "Results: ";
    for(int i = 0; i < n; i++) {
        cout << result[i];
        if(i < n - 1) cout << ", ";
    }
    cout << endl;

    return 0;
}