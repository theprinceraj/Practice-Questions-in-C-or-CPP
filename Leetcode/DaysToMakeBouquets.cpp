#include <bits/stdc++.h>
using namespace std;

/*
 * Problem Link: https://leetcode.com/problems/minimum-number-of-days-to-make-m-bouquets/description/
*/

int numOfBouquets(int day, int k, vector<int>& bloomDay) {
    int num = 0, count = 0;
    for(int i : bloomDay) {
        if(i <= day) {
            count++;
        } else
            count = 0;
        if(count == k) {
            num++;
            count = 0;
        }
    }
    return num;
}

void minDays(vector<int>& bloomDay, int m, int k) {
    if((long)m * k > bloomDay.size())
        cout << "Answer: " << -1;

    int start = 0, end = 0;
    for(int i : bloomDay) {
        end = max(i, end);
    }
    int ans = 0;
    while(start <= end) {
        int mid = (start + end) / 2;
        int bouqNum = numOfBouquets(mid, k, bloomDay);
        if(bouqNum >= m) {
            ans = mid;
            end = mid - 1;
        } else
            start = mid + 1;
    }
    if(ans == 0) {
        cout << "Answer: " << -1;
    }
    cout << "Answer: " << ans;
}

int main() {
    int n;
    cout << "Enter length of integer array bloomDay: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter " << n << " elements: ";
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int m;
    cout << "Enter number of bouquets to make i.e. m: ";
    cin >> m;

    int k;
    cout << "Enter number of adjacent flowers that can be taken i.e. k: ";
    cin >> k;

    minDays(nums, m, k);

    cout << endl;
    return 0;
}