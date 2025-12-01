#include <bits/stdc++.h>
using namespace std;

/*
 * Problem Link: https://codeforces.com/contest/2114/problem/A
*/

int findSqrt(int num) {
    if(num == 1) return 1;
    int l = 1, r = num / 2;
    do {
        int mid = (l + r) / 2;
        int prod = mid * mid;
        if(prod == num) return mid;
        else if(prod < num) l = mid + 1;
        else r = mid - 1;
    } while(l <= r);
    return -1;
}

int stringToNum(string year) {
    int num = 0;
    for(int i = 0 ; i < year.size(); i++) {
        int digit = (int)year[i] - 48;
        num = num * 10 + digit;
    }
    return num;
}

void squareYear(string year) {
    int yearNum = stringToNum(year);
    int root = findSqrt(yearNum);
    if(root == -1) {
        cout << -1 << "\n";
        return;
    }

    int a = root / 2;
    int b = root - a;
    cout << a << " " << b << "\n";

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
        string year;
        cin >> year;
        squareYear(year);
    }
}