/*
 * 3. Longest Substring Without Repeating Characters
 * Given a string s, find the length of the longest substring without duplicate
 * characters. Link:
 * https://leetcode.com/problems/longest-substring-without-repeating-characters/description/
 */

class Solution {
public:
  int lengthOfLongestSubstring(string s) {
    int start = 0, end = 0, n = s.size();
    bool freq[256] = {0};
    int answer = 0;
    while (end < n) {
      // jis character par ho, kya wo current window mei present hai? agar
      // hai toh usko hatao
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
