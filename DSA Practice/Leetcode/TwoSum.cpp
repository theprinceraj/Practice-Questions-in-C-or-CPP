#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> numMap;

    for(int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if(numMap.find(complement) != numMap.end()) {
            return {numMap[complement], i};
        }
        numMap[nums[i]] = i;
    }

    return {-1, -1};
}

int main() {
    int n;
    cout << "Enter length of vector: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter " << n << " elements: ";
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int target;
    cout << "Enter target sum: ";
    cin >> target;


    vector<int> ans = twoSum(nums, target);
    cout << "Solution: ";
    for(const int k : ans) {
        cout << k << " ";
    }
    cout << endl;


    return 0;
}