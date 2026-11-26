/*
 * Smallest Window Containing 0, 1, and 2 | EASY
 Given a string S consisting of the characters 0, 1, and 2, find the length of
 the smallest substring of string S that contains all three characters 0, 1,
 and 2. If no such substring exists, return -1.

 Example 1:
 Input: S = 10212
 Output: 3
 Explanation: The substring 102 is the smallest substring
 that contains the characters 0, 1 and 2.
 Example 2:
 Input: S = 12121
 Output: -1
 Explanation: As the character 0 is not present in the
 string S, therefor no substring containing
 all the three characters 0, 1 and 2
 exists. Hence, the answer is -1 in this case.
 Constraints:
 • 1 <= N <= 10⁵
 • s contains only characters 0, 1, and 2
 */

#include <string>
using namespace std;

class Approach1 {
  int smallestSubstring(string &S) {
    int start = 0, end = 0, n = S.size();
    int answer = INT_MAX, currentUniqueChar = 0;
    int count[3] = {0};

    while (end < n) {
      int endIdx = S[end] - '0'; // converts numbers in char form to integers
      count[endIdx]++;

      if (count[endIdx] == 1) {
        currentUniqueChar++;
      }

      while (currentUniqueChar == 3) {
        answer = min(answer, end - start + 1);
        int startIdx = S[start] - '0';
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
  int smallestSubstring(string &S) {
    int start = 0, end = 0, n = S.size();
    int answer = INT_MAX, currentUniqueChar = 0;
    int count[256] = {0};

    while (end < n) {
      int endIdx = S[end]; // converts numbers in char form to integers
      count[endIdx]++;

      if (count[endIdx] == 1) {
        currentUniqueChar++;
      }

      while (currentUniqueChar == 3) {
        answer = min(answer, end - start + 1);
        int startIdx = S[start];
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
