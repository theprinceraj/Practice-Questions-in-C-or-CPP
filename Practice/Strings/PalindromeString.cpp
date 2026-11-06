/*
 * Palindrome String | Easy
 * Idea: two pointers moving inward, comparing the characters at both ends.
 * Time: O(n) | Space: O(1)
 */

/*
 *
 * 79. Palindrome String | EASY | Solved
 You are given a string s. Your task is to determine if the string is a
 palindrome. A string is considered a palindrome if it reads the same forwards
 and backGiven a string s, determine if it is a valid palindrome. A string is a
 valid palindrome when:

 Return true if s is a valid palindrome, or false otherwisewards.

 Example 1:
 Input: s = abba
 Output: true
 Explanation: "abba" reads the same forwards and backwards, so it is a
 palindrome. Example 2: Input: s = abc Output: false Explanation: "abc" does not
 read the same forwards and backwards, so it is not a palindrome. Constraints:
 • 1 <= s.length <= 10^6
 • The string&nbsp;s contains only lowercase english letters (a-z).
 *
 */

#include <string>
using namespace std;

bool isPalindrome(string &s) {
  int start = 0, end = s.size() - 1;
  while (start < end) {
    if (s[start] == s[end]) {
      start++;
      end--;
    } else {
      return 0;
    }
  }

  return 1;
}
