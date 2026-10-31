/*
 * 303. Sort a String | EASY
 Given a string s consisting of lowercase letters, arrange all its letters in
 ascending order.

 Example 1:
 Input: s = "edcab"
 Output: "abcde"
 Example 2:
 Input: s = "strike"
 Output: "eikrst"
 Constraints:
 • 1 <= s.length <= 10^5
 • S contains only lowercase alphabets.
 */

#include <string>
using namespace std;

string sort(string s) {

  int arr[26] = {0};
  int n = s.size();

  for (int i = 0; i < n; i++) {
    int cNum = s[i] - 97; // since 'a' --> 97, can also write as (s[i] - 'a')
    arr[cNum]++;
  }

  string ans = "";
  for (int i = 0; i < 26; i++) {
    while (arr[i] > 0) {
      ans += (char)(i + 97);
      arr[i]--;
    }
  }

  return ans;
}
