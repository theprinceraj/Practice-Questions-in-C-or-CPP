/*
 *
 * 82. Reverse a String
 EASY
 Solved
 Given a string s, return the reverse of the string. The string may contain any
 ASCII characters (letters, numbers, special characters, spaces, etc.).

 Example 1:
 Input: s = STrikE
 Output: EkirTS
 Explanation: Reverse of STrikE is EkirTS
 Example 2:
 Input: s = CoderArmy
 Output: ymrAredoC
 Explanation: Reverse of CoderArmy is ymrAredoC
 Constraints:
 • 1 <= len(s) <= 10⁵
 • String can contain any ASCII printable characters
 *
 */

#include <string>
using namespace std;

string reverseString(string &s) {
  int n = s.size();
  string ans = "";

  for (int i = n - 1; i >= 0; i--) {
    ans += s[i];
  }

  return ans;
}
