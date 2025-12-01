#include<bits/stdc++.h>
using namespace std;

/*
 * Problem Link: https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/description/
*/

// Time Complexity: O(n)
int findMin1(vector<int>& nums) {
    int smallest = nums[0];
    for(int i = 1; i < nums.size(); i++) {
        if(nums[i] < smallest) {
            smallest = nums[i];
        }
    }
    return smallest;
}

// Time Complexity: O(log n)
int findMin2(vector<int>& nums) {
    int start = 0, end = nums.size() - 1;
    int curr_smallest = nums[0]; // it is given in question that array might not be rotated
                                 // so in that case 0th index has smallest element
    while(start <= end) {
        int mid = start + (end - start) / 2;
        
        if(nums[mid] < nums[0]) { // means array is sorted on right side
            curr_smallest = nums[mid];
            end = mid - 1;
        } else if(nums[mid] > nums[0]) { // means array is sorted on left side
            start = mid + 1;
        } else {
            start = mid + 1;
        }
    }
    return curr_smallest;
}

int main() {
    // vector<int> arr = {3, 4, 5, 1, 2};
    // vector<int> arr = {4, 5, 6, 7, 0, 1, 2};
    vector<int> arr = {11, 13, 15, 17};
    int ans = findMin2(arr);
    cout << ans << endl;
    return 0;
}