#include<bits/stdc++.h>
using namespace std;

/*
 * Problem Link: https://leetcode.com/problems/search-in-rotated-sorted-array/description/
*/

// Time Complexity: O(log n)
int search(vector<int>& nums, int target) {
    int start = 0, end = nums.size() - 1, ans = -1;
    while(start <= end) {
        int mid = start + (end - start) / 2;

        if(nums[mid] == target) {
            return mid;
        } else if(nums[mid] >= nums[0]) { // arr left sorted
            if(nums[start] <= target && nums[mid] > target) // check if sorted side ke range mei aayega ya nahi target
                end = mid - 1;
            else start = mid + 1;
        } else { // arr right sorted
            if(nums[mid] <= target && nums[end] > target) // check if sorted side ke range mei aayega ya nahi target
                start = mid + 1;
            else end = mid - 1;
        }
    }
    return ans;
}

int main() {
    // vector<int> arr = {4, 5, 6, 7, 0, 1, 2};
    vector<int> arr = {1};
    int target = 1;
    int ans = search(arr, target);
    cout << ans << endl;
    return 0;
}