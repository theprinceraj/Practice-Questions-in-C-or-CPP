#include<bits/stdc++.h>
using namespace std;

/*
 * Problem Link: https://www.geeksforgeeks.org/problems/number-of-occurrence2259/1
*/

int countFreq(vector<int>& arr, int target) {
    int first_occ = -1;
    // find first occurence of target
    int start = 0, end = arr.size() - 1;
    while(start <= end) {
        int mid = start + (end - start) / 2;
        if(arr[mid] == target) {
            first_occ = mid;
            end = mid - 1;
        } else if(arr[mid] < target) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    int last_occ = arr.size() - 1;
    // find last occurence of target
    start = 0, end = arr.size() - 1;
    while(start <= end) {
        int mid = start + (end - start) / 2;
        if(arr[mid] == target) {
            last_occ = mid;
            start = mid + 1;
        } else if(arr[mid] < target) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    if(first_occ == -1) {
        return 0;
    }
    return last_occ - first_occ + 1;
}

int main() {
    vector<int> arr = {1, 1, 2, 2, 2, 2, 3};
    int k = 2;
    int ans = countFreq(arr, k);
    cout << ans << endl;
    return 0;
}