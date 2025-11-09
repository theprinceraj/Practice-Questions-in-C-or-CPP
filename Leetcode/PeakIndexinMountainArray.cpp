#include<bits/stdc++.h>
using namespace std;

/*
 * Problem Link: https://leetcode.com/problems/peak-index-in-a-mountain-array/description/
*/

// Time Complexity: O(n)
int peakIndexInMountainArrayBruteForce(vector<int>& arr) {
    for(int i = 1; i < arr.size(); i++) {
        if(arr[i - 1] > arr[i]) {
            return i - 1;
        }
    }
    return 0;
}

// Time Complexity: O(log (n))
int peakIndexInMountainArrayOptimised(vector<int>& arr) {
    int start = 0, end = arr.size() - 1;
    // int start = 1, end = arr.size() - 2;
    while(start <= end) {
        // We can not use this formula to calculate mid here unless we initialize [start = 1 & end = arr.size()-2] because
        // below way creates left bias and might give 0 which would lead to arr[-1] being checked and error
        // int mid = start + (end - start) / 2;
        int mid = end - (end - start) / 2;
        if(arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1]) { //Condn. for peak element
            return mid;
        } else if(arr[mid] > arr[mid - 1]) { // this way we find out that we are in the increasing slope of mountain arry
            start = mid + 1;
        } else { // this way we find out that we are in decreasing slope of mountain arry
            end = mid - 1;
        }
    }
    return -1;
}

int main() {
    vector<int> arr = {3, 5, 3, 2, 0};
    // vector<int> arr = {0, 2, 1, 0};
    int ans = peakIndexInMountainArrayBruteForce(arr);
    cout << ans << endl;
    return 0;
}