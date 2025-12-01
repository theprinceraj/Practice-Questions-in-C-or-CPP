#include <bits/stdc++.h>
using namespace std;

/*
 * Problem Link: https://www.geeksforgeeks.org/problems/count-the-zeros2550/1
*/

// O(n) Time Complexity
int countZeroes1(vector<int> &arr) {
    int res = 0;
    for(int i : arr) {
        if(i == 0) {
            res++;
        }
    }
    return res;
}

// O(log n) Time Complexity
int countZeroes2(vector<int> &arr) {
    int firstOccurrence = -1;
    // Find first occurence of 0
    int start = 0, end = arr.size() - 1;
    while(start <= end) {
        int mid = start + (end - start) / 2;
        if(arr[mid] == 0) {
            end = mid - 1;
            firstOccurrence = mid;
        } else {
            start = mid + 1;
        }
    }

    int lastOccurrence = arr.size() - 1;
    // Find last occurence of 0
    start = 0, end = arr.size() - 1 ;
    while(start <= end) {
        int mid = start + (end - start) / 2;
        if(arr[mid] == 0) {
            start = mid + 1;
            lastOccurrence = mid;
        } else {
            start = mid + 1;
        }
    }
    return lastOccurrence - firstOccurrence + 1;
}

int main() {
    // vector<int> arr = {1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0};
    vector<int> arr = {0, 0, 0, 0, 0};

    int ans = countZeroes2(arr);
    cout << ans << endl;

    return 0;
}