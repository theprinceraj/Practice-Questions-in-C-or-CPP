/*
 * Smallest Window With 0, 1 and 2
 Given a string s consisting only of the characters '0', '1' and '2', determine
 the length of the smallest substring that contains all three characters at
 least once. If no such substring exists, return -1.
 Examples :
 Input: s = "10212"
 Output: 3
 Explanation: The substring "102" is the shortest substring that contains all
 three characters '0', '1', and '2', so the answer is 3. Input: s = "12121"
 Output: -1
 Explanation: The character '0' is not present in the string, so no substring
 can contain all three characters '0', '1', and '2'. Hence, the answer is -1.
 Constraints:
 1 ≤ s.size() ≤ 105
 s consists only of the characters 0 1 and 2
 */

#include <string>
using namespace std;

class Approach1 {
  int smallestSubstring(string &s) {
    int start = 0, end = 0, n = s.size();
    int answer = INT_MAX, currentUniqueChar = 0;
    int count[3] = {0};

    while (end < n) {
      int endIdx = s[end] - '0'; // converts numbers in char form to integers
      count[endIdx]++;

      if (count[endIdx] == 1) {
        currentUniqueChar++;
      }

      while (currentUniqueChar == 3) {
        answer = min(answer, end - start + 1);
        int startIdx = s[start] - '0';
        count[startIdx]--;
        if (count[startIdx] == 0) {
          currentUniqueChar--;
        }
        start++;
      }
      end++;
    }

    return answer == INT_MAX ? -1 : answer;
  }
};

class Approach2 {
  int smallestSubstring(string &s) {
    int start = 0, end = 0, n = s.size();
    int answer = INT_MAX, currentUniqueChar = 0;
    int count[256] = {0};

    while (end < n) {
      int endIdx = s[end]; // converts numbers in char form to integers
      count[endIdx]++;

      if (count[endIdx] == 1) {
        currentUniqueChar++;
      }

      while (currentUniqueChar == 3) {
        answer = min(answer, end - start + 1);
        int startIdx = s[start];
        count[startIdx]--;
        if (count[startIdx] == 0) {
          currentUniqueChar--;
        }
        start++;
      }
      end++;
    }

    return answer == INT_MAX ? -1 : answer;
  }
};
