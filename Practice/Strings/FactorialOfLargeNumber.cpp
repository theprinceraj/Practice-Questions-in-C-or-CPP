/*
 * 308. Factorials of large numbers | MEDIUM
 Given an integer num , find its factorial. Return a array of integers denoting
 the digits that make up the factorial of n.

 Constraints:  1 ≤ num ≤ 103
 Example 1:
 Input: num = 5
 Output: [1, 2, 0]
 Example 2:
 Input: num = 4
 Output: [2, 4]
 */

#include <vector>
using namespace std;

class Solution {
public:
  vector<int> factorial(int num) {
    vector<int> ans(1, 1);
    while (num > 1) {
      int carry = 0;
      for (int i = 0; i < ans.size(); i++) {
        int sum = num * ans[i] + carry;
        ans[i] = sum % 10;
        carry = sum / 10;
      }
      while (carry) {
        ans.push_back(carry % 10);
        carry /= 10;
      }
      num--;
    }
    reverse(ans.begin(), ans.end());
    return ans;
  }
};
