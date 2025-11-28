#include<bits/stdc++.h>
using namespace std;

// Problem Link: https://www.geeksforgeeks.org/problems/allocate-minimum-number-of-pages0937/1

// TIme Complexity: n * log n
int findPages(vector<int> &arr, int k) {
    int n = arr.size();
    if(n < k) {
        return -1;
    }

    int ans = -1;
    int max_term = *max_element(arr.begin(), arr.end());
    int sum = accumulate(arr.begin(), arr.end(), 0);

    int start = max_term, end = sum;

    while(start <= end) {
        int mid = start + (end - start) / 2;

        // distribute books
        int count = 1, page = 0;
        for(int j = 0; j <= n - 1; j++) {
            page += arr[j];
            if(page > mid) {
                ++count;
                page = arr[j];
            }
        }

        // count <= k instead of count = k because agar koi 4 book 3 students mei divide ho sakti
        // hai toh wo 4 students mei bhi divide ho sakti ha
        if(count <= k) {
            ans = mid;
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }

    return ans;
}

int main() {
    vector<int> arr = {12, 34, 67, 90};
    int k = 2;
    cout << findPages(arr, k) << endl;
}