/*
 * Kth Missing Positive Number | Easy | LeetCode 1539
 * https://leetcode.com/problems/kth-missing-positive-number/
 * Idea: arr[i] - i - 1 counts the missing numbers before arr[i]; binary search the first index where it reaches k, answer = index + k.
 * Time: O(log n) optimised (run from main), O(n + k) brute force | Space: O(1)
 */

#include<bits/stdc++.h>
using namespace std;

// Time Complexity: O(n)
int findKthPositiveBruteForce(vector<int>& arr, int k) {
    int missing_count = 0, current_num = 1, arr_idx = 0;
    int n = arr.size() - 1;
    while(missing_count < k) {
        if(arr_idx <= n && arr[arr_idx] == current_num)
            arr_idx++;
        else
            missing_count++;
        current_num++;
    }
    return current_num - 1;
}

int findKthPositiveOptimised(vector<int>& arr, int k) {
    int start = 0, end = arr.size() - 1, ans = arr[end];
    while(start <= end) {
        int mid = start + (end - start) / 2;
        if(arr[mid] - mid - 1 >= k) {
            ans = mid;
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }
    return ans + k;
}

int main() {
    vector<int> arr = {1, 2, 3, 4};
    int k = 2;
    int ans = findKthPositiveOptimised(arr, k);
    cout << ans << endl;
    return 0;
}