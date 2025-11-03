#include<bits/stdc++.h>
using namespace std;
/*
 * Problem Link: https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/
*/

vector<int> searchRange(vector<int>& nums, int target) {
    int start = 0, end = nums.size() - 1;
    int first = -1, last = -1;

    // Find first occurrence
    while(start <= end) {
        int mid = start + (end - start) / 2;
        if(nums[mid] == target) {
            first = mid;
            end = mid - 1;
        } else if(nums[mid] < target) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    start = 0, end = nums.size() - 1;
    // Find second occurrence
    while(start <= end) {
        int mid = start + (end - start) / 2;
        if(nums[mid] == target) {
            last = mid;
            start = mid + 1;
        } else if(nums[mid] < target) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    vector<int> ans;
    ans.push_back(first);
    ans.push_back(last);
    return ans;
}

int main() {
    vector<int> input = {1, 2, 2, 2, 4, 5, 6};
    int target = 2;
    vector<int> ans = searchRange(input, target);
    for(int k : ans) {
        cout << k << " ";
    }
    cout << endl;
}