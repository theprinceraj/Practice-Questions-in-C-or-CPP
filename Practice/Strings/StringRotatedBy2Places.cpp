/*
 * 301. String Rotated by 2 Places | EASY
 Given two strings, word1 and word2. Return true if the string word2 can be
 obtained by rotating (in any direction) string word1 by exactly 2 places,
 otherwise, false.

 Note: Both rotations should be performed in the same direction chosen
 initially.


 Example 1:
 Input: word1 = "amazon", word2 = "azonam"
 Output: true
 Example 2:
 Input: word1 = "dubbmaiq", word2 = "bbmaiqdu"
 Output: true
 Constraints:
 • 1 ≤ word1.length, word2.length ≤ 10^5
 */

#include <String>
using namespace std;

class Solution1 { // My approach
public:
  string shiftStr(string &w1, int shiftBy) {
    int n = w1.length();
    string newS(n, ' ');
    for (int i = 0; i < n; i++) {
      int idx = ((i + shiftBy) % n + n) % n;
      newS[idx] = w1[i];
    }
    return newS;
  }
  bool isRotated(string &word1, string &word2) {

    if (word1.length() != word2.length())
      return 0;
    if (word1.size() < 2)
      return word1 == word2;

    return shiftStr(word1, 2) == word2 || shiftStr(word1, -2) == word2;
  }
};

class Solution2 { // video's approach
public:
  bool isRotated(string &word1, string &word2) {
    if (word1.length() != word2.length())
      return 0;
    if (word1.size() < 2)
      return word1 == word2;

    int n = word1.length();
    bool rotated = 0;

    // clockwise rotate check
    for (int i = 0; i < n; i++) {
      int rotIdx = (i + 2) % n;
      if (word1[i] == word2[rotIdx]) {
        rotated = 1;
      } else {
        break;
      }
    }
    if (rotated == 1)
      return 1;

    // anti clockwise rotate check
    for (int i = 0; i < n; i++) {
      int rotIdx = ((i - 2) % n + n) % n;
      if (word1[i] == word2[rotIdx]) {
        rotated = 1;
      } else {
        break;
      }
    }

    return rotated;
  }
};
