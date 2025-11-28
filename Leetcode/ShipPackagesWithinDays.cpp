#include<bits/stdc++.h>
using namespace std;

//  Problem Link: https://leetcode.com/problems/capacity-to-ship-packages-within-d-days/description/

int shipWithinDays(vector<int>& weights, int days) {
    int n = weights.size(), ans = -1;
    int start = *max_element(weights.begin(), weights.end()), end = accumulate(weights.begin(), weights.end(), 0);

    while(start <= end) {
        int mid = start + (end - start) / 2;

        int curr_wt = 0, count = 1;
        for(int i : weights) {
            curr_wt += i;
            if(curr_wt > mid) {
                count++;
                curr_wt = i;
            }
        }

        if(count <= days) {
            ans = mid;
            end = mid - 1;
        } else start = mid + 1;
    }

    return ans;
}

int main() {
    // vector<int> weights = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // int days = 5;

    // vector<int> weights = {3, 2, 2, 4, 1, 4};
    // int days = 3;

    vector<int> weights = {1, 2, 3, 1, 1};
    int days = 4;
    cout << shipWithinDays(weights, days) << endl;
}