/*
 * Reverse String | Easy | LeetCode 344
 * https://leetcode.com/problems/reverse-string/
 * Idea: two pointers swap the ends and move inward, reversing in place.
 * Time: O(n) | Space: O(1)
 */

/*
 * 344. Reverse String | Solved
 Write a function that reverses a string. The input string is given as an array
 of characters s. You must do this by modifying the input array in-place with
 O(1) extra memory.
 Example 1:
 Input: s = ["h","e","l","l","o"]
 Output: ["o","l","l","e","h"]

 Example 2:
 Input: s = ["H","a","n","n","a","h"]
 Output: ["h","a","n","n","a","H"]

 Constraints:
 1 <= s.length <= 105
 s[i] is a printable ascii character.
 */

#include <vector>
using namespace std;

class Solution {
public:
  void reverseString(vector<char> &s) {
    int start = 0, end = s.size() - 1;
    while (start < end) {
      swap(s[start], s[end]);
      start++, end--;
    }
  }
};
