#include<bits/stdc++.h>
using namespace std;

/*
 * Problem Link: https://leetcode.com/problems/3sum/description/
*/

void selectionSort(vector<int>& arr) {
    for(int i = 0; i < arr.size(); i++) {
        int min_index = i;
        for(int j = i + 1; j < arr.size(); j++) {
            if(arr[j] < arr[min_index]) {
                min_index = j;
            }
        }
        swap(arr[i], arr[min_index]);
    }
}

vector<vector<int>> threeSum(vector<int>& nums) {
    int n = nums.size();
    selectionSort(nums);

    vector<vector<int>> results;

    for(int i = 0; i < n - 2; i++) {
        if(i > 0 && nums[i] == nums[i - 1]) continue;
        int j = i + 1, k = n - 1;
        while(j < k) {
            int total = nums[i] + nums[j] + nums[k];
            if(total > 0) {
                k--;
            } else if(total < 0) {
                j++;
            } else {
                results.push_back({nums[i], nums[j], nums[k]});
                j++;

                // skip duplicates for 2nd element
                while(j < k && nums[j] == nums[j - 1]) j++;
            }
        }
    }
    return results;
}

int main() {
    vector<int> arr = {-1, 0, 1, 2, -1, -4};
    vector<vector<int>> ans = threeSum(arr);
    for(vector<int> i : ans) {
        for(int j : i) {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}