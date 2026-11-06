/*
 * Search Insert Position | Easy | LeetCode 35
 * https://leetcode.com/problems/search-insert-position/
 * Idea: binary search, remembering the leftmost index whose value is > target as the insertion point.
 * Time: O(log n) | Space: O(1)
 */

#include<bits/stdc++.h>
using namespace std;

int searchInsert(vector<int>& nums, int target) {
    int start = 0, end = nums.size() - 1;
    int possible_index = nums.size();
    while(start <= end) {
        int mid = start + (end - start) / 2;
        if(nums[mid] == target) {
            return mid;
        } else if(nums[mid] > target) {
            possible_index = mid;
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }
    return possible_index;
}

int main() {
    vector<int> input = {1, 3, 5, 6};
    int target = 7;
    int ans = searchInsert(input, target);
    cout << ans << endl;
    return 0;
}