/*
 * 317. Longest Palindrome | MEDIUM
 Given a string s which consists of lowercase or uppercase letters, return the
 length of the longest palindrome that can be built with those letters. Letters
 are case sensitive, for example, "Aa" is not considered a palindrome.

 Example 1:
 Input: s = "s"
 Output: 1
 Explanation: The longest palindrome that can be built is "s", whose length
 is 1. Example 2: Input: s = "abccccdd" Output: 7 Explanation: One longest
 palindrome that can be built is "dccaccd", whose length is 7. Constraints: • 1
 <= s.length <= 2000 • s consists of lowercase and/or uppercase
 English&nbsp;letters only.
 */

#include <string>
#include <vector>
using namespace std;

class Solution {
  int longestPalindrome(string s) {
    vector<int> frequency(256, 0);
    // 256 because there are only 256 possible characters in extended ASCII
    // system
    for (auto c : s) {
      frequency[c]++;
    }

    int ans = 0;
    bool odd = 0;
    // ^tracks if there exists a char that occurs odd times in string

    for (auto i : frequency) {
      if (i % 2 == 0) {
        ans += i; // even occurences can be evenly distributed in a palindrome
                  // completely
      } else {
        ans += i - 1; // 1 is deducted to avoid counting multiple odd occurences
                      // twice inside loop
        odd = 1;
      }
    }

    if (odd == 1) {
      ans += 1;
      // if a symbol appears odd times in string, we can use one occurence of
      // that symbol in the centre of that palindrome
    }

    return ans;
  }
};
