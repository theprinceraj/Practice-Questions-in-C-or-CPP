/*
 * Valid Palindrome | Easy | LeetCode 125
 * https://leetcode.com/problems/valid-palindrome/
 * Idea: two pointers skip non-alphanumeric characters and compare the lowercased ends.
 * Time: O(n) | Space: O(1)
 */

/*
 *125. Valid Palindrome | Easy
 A phrase is a palindrome if, after converting all uppercase letters into
 lowercase letters and removing all non-alphanumeric characters, it reads the
 same forward and backward. Alphanumeric characters include letters and numbers.
 */

#include <string>
using namespace std;

class Solution {
public:
  bool isPalindrome(string s) {
    int start = 0, end = s.size() - 1;
    while (start < end) {
      // Skip non-alphanumeric characters from the left
      if (!isalnum(s[start])) {
        start++;
      }
      // Skip non-alphanumeric characters from the right
      else if (!isalnum(s[end])) {
        end--;
      }
      // Compare lowercase versions of both characters
      else {
        if (tolower(s[start]) != tolower(s[end])) {
          return false;
        }
        start++;
        end--;
      }
    }

    return 1;
  }
};
