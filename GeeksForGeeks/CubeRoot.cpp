#include<bits/stdc++.h>
using namespace std;

/*
 * Problem Link: https://www.geeksforgeeks.org/problems/cube-root-of-a-number0915/1
*/

int cubeRoot(int n) {
    int start = 0, end = n - 1, cube_root = -1;
    if(n == 1) {
        return 1;
    }
    while(start <= end) {
        int mid = start + (end - start) / 2;
        long long curr_cube = (long long)mid * mid * mid;
        if(n == curr_cube) {
            cube_root = mid;
            break;
        } else if(n > curr_cube) {
            cube_root = mid;
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return cube_root;
}

int main() {
    int n = 18486;
    int ans = cubeRoot(n);
    cout << ans << endl;
    return 0;
}