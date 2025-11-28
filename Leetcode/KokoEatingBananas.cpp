#include<bits/stdc++.h>
using namespace std;

// Problem Link: https://leetcode.com/problems/koko-eating-bananas/description/

int minEatingSpeed(vector<int>& piles, int h) {
    int n = piles.size(), ans = -1;
    int start = 0, end = *max_element(piles.begin(), piles.end());
    cout << start << " " << end << endl;

    while(start <= end) {
        int n = piles.size(), ans = -1;
        int start = 1, end = *max_element(piles.begin(), piles.end());
        cout << start << " " << end << endl;

        while(start <= end) {
            int mid = start + (end - start) / 2;

            // int count = 0;
            long long count = 0;
            for(int j : piles) {
                // We calculate the hours using mathematical formula: [pile /
                // speed] We need to get the ceiling of the above division
                count += (j + mid - 1) / mid;

                // The following approach to calculate hours is correct as well
                // but it is highly inefficient because it is brute force
                // calculation. Example: If a pile has 10^9 bananas and your
                // current eating speed (mid) is 1, this loop runs 1 billion
                // times for a single pile. This turns your (log N) binary
                // search into a brute-force O(N) operation while(j > 0) {
                //     count++;
                //     j -= mid;
                // }
            }

            if(count <= h) {
                ans = mid;
                end = mid - 1;
            } else
                start = mid + 1;
        }

        return ans;
    }

    int main() {
        // vector<int> piles = {3, 6, 7, 11};
        // int h = 8;

        vector<int> piles = {30, 11, 23, 4, 20};
        int h = 5;
        cout << minEatingSpeed(piles, h) << endl;
    }