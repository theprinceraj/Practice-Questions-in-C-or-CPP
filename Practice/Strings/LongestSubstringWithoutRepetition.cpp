/*
 * Longest Substring Without Repeating Characters | MEDIUM
 You are given a string s. Find the length of the longest substring that
 contains no repeating characters. A substring is a contiguous sequence of
 characters within a string. Every character in the substring must appear at
 most once. Return the maximum possible length of such a substring.

 Example 1:
 Input: s = "abcabcbb"
 Output: 3
 Explanation: The substring "abc" contains three different characters, so its
 length is 3. We cannot extend it to "abca" because a appears twice. Similarly,
 "bca" and "cab" are also valid substrings of length 3. Therefore, the longest
 substring without repeating characters has length 3.
 Example 2:
 Input: s = "pwwkew"
 Output: 3
 Explanation: The substring "wke" contains three different
 characters, so its length is 3. A longer sequence such as "pwke" is not a
 substring because its characters are not contiguous in s. Also, "pww" cannot be
 used because w appears twice. Therefore, the longest valid substring has
 length 3.
 */

#include <string>

using namespace std;

class Solution {
public:
  int maxUniqueSubstring(string &s) {
    int start = 0, end = 0, n = s.size();
    bool freq[256] = {0};
    int answer = 0;
    while (end < n) {
      // jis character par ho, kya wo current window mei present hai? agar hai
      // toh usko hatao
      while (freq[s[end]]) {
        freq[s[start]] = 0;
        start++;
      }

      freq[s[end]] = 1;
      end++;

      answer = max(answer, end - start);
    }

    return answer;
  }
};
