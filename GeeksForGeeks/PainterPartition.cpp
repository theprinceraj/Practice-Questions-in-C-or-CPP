#include<bits/stdc++.h>
using namespace std;

// Problem Link: https://www.geeksforgeeks.org/problems/the-painters-partition-problem1535/1

int minTime(vector<int>&arr, int k) {
    int n = arr.size(), ans = -1;

    int minLimit = *max_element(arr.begin(), arr.end());
    int maxLimit = accumulate(arr.begin(), arr.end(), 0);

    int start = minLimit, end = maxLimit;
    while(start <= end) {
        int mid = start + (end - start) / 2;

        int length = 0, count = 1;
        for(int j : arr) {
            length += j;
            if(length > mid) {
                count++;
                length = j;
            }
        }

        if(count <= k) {
            ans = mid;
            end = mid - 1;
        } else start = mid + 1;
    }

    return ans;
}

int main() {
    // vector<int> arr = {5, 10, 30, 20, 15};
    // int k = 3;

    vector<int> arr = {10, 20, 30, 40};
    int k = 2;

    cout << minTime(arr, k) << endl;
}