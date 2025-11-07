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
    while(start <= end) {
        int mid = start + (end - start) / 2;
        if(arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1]) { //Condn. for peak element
            return mid;
        } else if(arr[mid] > arr[mid - 1]) { // this way we find out that we are in increasing slope of mountain arry
            start = mid + 1;
        } else { // this way we find out that we are in decreasing slope of mountain arry
            end = mid - 1;
        }
    }
    return -1;
}

int main() {
    vector<int> arr = {0, 1, 10, 5, 2};
    int ans = peakIndexInMountainArrayBruteForce(arr);
    cout << ans << endl;
    return 0;
}