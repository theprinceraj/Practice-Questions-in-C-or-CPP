#include<bits/stdc++.h>
using namespace std;

/*
 * Problem Link: https://leetcode.com/problems/sqrtx/description/
 */

int mySqrt(int x) {
    int start = 1, end = x, possible_root;
    while(start <= end) {
        int mid = start + (end - start) / 2;
        long long mid_sqr = (long long)mid * mid;
        if(mid_sqr == x) {
            return mid;
        } else if(x < mid_sqr) {
            end = mid - 1;
        } else {
            possible_root = mid;
            start = mid + 1;
        }
    }
    return possible_root;
}

int main() {
    int x = 121;
    int res = mySqrt(x);
    cout << res << endl;
}