/*
 * 64. Smallest Distinct Window | MEDIUM
 Given a string str, your task is to find the length of the smallest window that
 contains all the characters of the given string at least once.

 Example 1:
 Input: str = "aaab"
 Output: 2
 Explanation: Sub-String "ab" has the smallest length that contains all the
 characters of str.
 Example 2:
 Input: str = "aabcbcdbca"
 Output: 4
 Explanation:
 Sub-String "dbca" has the smallest length that contains all the characters of
 str.
 */

#include <String>
using namespace std;

int findSubString(string str) {
  // first find all unique chars in the string
  int uniqueChar = 0, n = str.size();
  bool charIsPresent[256] = {0};

  for (char c : str) {
    if (charIsPresent[c] == 0) {
      charIsPresent[c] = 1;
      uniqueChar++;
    }
  }

  // main problem: sliding window
  int start = 0, end = 0, answer = str.size(), currentUniqueChar = 0;
  int count[256] = {0};

  while (end < n) {
    count[str[end]]++;

    if (count[str[end]] == 1) {
      currentUniqueChar++;
    }

    while (currentUniqueChar == uniqueChar) {
      answer = min(answer, end - start + 1);
      count[str[start]]--;
      if (count[str[start]] == 0) {
        currentUniqueChar--;
      }
      start++;
    }
    end++;
  }
  return answer;
}
