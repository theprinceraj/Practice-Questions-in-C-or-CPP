#include <bits/stdc++.h>
using namespace std;

void fetchLongestGoodArray(int l, int r) {
    // separate keys for left and right pointers
    // check if new low < mid before assignment

    int low = l;
    int high = r;
    int k_left = 1, k_right = 1;
    int len = 0;
    while(low >= l && high <= r) {
        int mid = (low + high) / 2;
        if(mid - k_left < mid) {
            len++;
            if(k_left != 0) {
                k_left--;
            }
            if(mid - 1 >= low) {
                low = mid - 1;
            }
        }
        if(mid + k_right > mid) {
            len++;
            if(k_right != high) {
                k_right++;
            }
            if(mid + 1 < high) {
                high = mid + 1;
            }
        }
    }

    cout << len << endl;

}

int main() {
    int n;
    cout << "Enter no. of test cases: ";
    cin >> n;

    vector<vector<int>> nums(n, vector<int>(2));

    for(int i = 0; i < n; i++) {
        int l, r;
        cout << "Enter test case " << i << ": ";
        cin >> l >> r;
        nums[i][0] = l;
        nums[i][1] = r;
    }

    for(int j = 0; j < n; j++) {
        fetchLongestGoodArray(nums[j][0], nums[j][1]);
    }


    return 0;
}