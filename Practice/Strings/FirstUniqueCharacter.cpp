/*
 * 226. First Unique Character in a String
 EASY
 Given a string s, find the first non-repeating character in it and return its
 index. If it does not exist, return -1.

 Example 1:
 Input: s = "leetcode"
 Output: 0
 Explanation: The character 'l' at index 0 is the first character that does not
 occur at any other index. Example 2: Input: s =
 "coderarmyisacommunityforcoders" Output: 16 Example 3: Input: s =
 "loveleetcode" Output: 2 Constraints: • 1 ≤ s.length ≤ 10^5 • s consists of
 only lowercase English letters
 */

#include <string>
using namespace std;

int firstUniqChar(string &s) {
  int arr[26] = {0};
  int n = s.size();

  for (int i = 0; i < n; i++) {
    int cNum = s[i] - 97; // since 'a' --> 97, can also write as (s[i] - 'a')
    arr[cNum]++;
  }

  for (int i = 0; i < n; i++) {
    int cNum = s[i] - 97;
    if (arr[cNum] == 1) {
      return i;
    }
  }

  return -1;
}
