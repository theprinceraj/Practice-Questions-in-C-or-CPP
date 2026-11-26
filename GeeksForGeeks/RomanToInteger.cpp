/*
 * Roman to Integer
 * Link: https://www.geeksforgeeks.org/problems/roman-number-to-integer3201/1
 */

#include <stdexcept>
#include <string>
using namespace std;

class Solution {
public:
public:
  int findValue(char r) {
    string romans = "IVXLCDM";
    int nums[] = {1, 5, 10, 50, 100, 500, 1000};

    for (int i = 0; i < romans.size(); i++) {
      if (romans[i] == r) {
        return nums[i];
      }
    }

    throw invalid_argument("Invald roman numeral");
  }

  bool isNextRomanBigger(char first, char next) {
    if (first == next) {
      return false;
    }

    string romans = "IVXLCDM";
    for (char c : romans) {
      if (first == c) {
        return true;
      } else if (next == c) {
        return false;
      }
    }
    return false;
  }
  int romanToInteger(string &s) {
    int n = s.size(), index = 0;
    int answer = 0;

    while (index < n) {
      if (index != n - 1 && isNextRomanBigger(s[index], s[index + 1])) {
        answer -= findValue(s[index]);
      } else {
        answer += findValue(s[index]);
      }

      index++;
    }

    return answer;
  }
};
