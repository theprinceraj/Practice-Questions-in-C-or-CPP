/*
 * 305. Add Strings | EASY
 Given two non-negative integers, num1 and num2 represented as string, return
 the sum of num1 and num2 as a string. You must solve the problem without using
 any built-in library for handling large integers (such as BigInteger). You must
 also not convert the inputs to integers directly.
 Also on Leetcode at: https://leetcode.com/problems/add-strings/description/

 Example 1:
 Input: num1 = "9", num2 = "15"
 Output: "24"
 Example 2:
 Input: num1 = "5", num2 = "99"
 Output: "104"

 Constraints:
 • 1 <= num1.length, num2.length <= 10^4
 • num1 and num2 consist of only digits.
 • num1 and num2 don't have any leading zeros except for the zero itself.
 */

#include <string>
using namespace std;

class Solution {
public:
  string addStrings(string num1, string num2) {
    int end1 = num1.length() - 1;
    int end2 = num2.length() - 1;

    string ans;

    int carriedSum = 0;

    while (end1 > -1 || end2 > -1 || carriedSum != 0) {
      int currentSum = 0;
      if (end1 >= 0) {
        currentSum += num1[end1] - '0';
      }
      if (end2 >= 0) {
        currentSum += num2[end2] - '0';
      }
      currentSum += carriedSum;

      carriedSum = currentSum / 10;

      ans.insert(0, to_string(currentSum % 10));

      end1--, end2--;
    }

    return ans;
  }
};
