/*
 * 310. Roman to Integer | MEDIUM
 Convert a given Roman Numeral string s to its integer representation. The
 representation uses the symbols {I, V, X, L, C, D, M} with respective values
 {1, 5, 10, 50, 100, 500, 1000}.

 * Conversion Rules
 Roman numerals are converted by processing the string from left to right using
 the following rules:
 1. Standard Conversion
 If a symbol is followed by another symbol of equal or lesser value, add its
 value to the total. The last symbol in the string is always added.
 2. Subtractive Forms
 If a symbol is followed by another symbol of greater value, it represents
 a subtractive form. Subtract the current symbol's value from the total
 (effectively next_value - current_value). Only the following pairs form valid
 subtractive notation: IV (4), IX (9) XL (40), XC (90) CD (400), CM (900)
 3. Repetition Constraints
 I, X, C, and M can appear at most three times consecutively.
 V, L, and D cannot be repeated consecutively.

 Example 1:
 Input: s = "II"
 Output: 2
 Example 2:
 Input: s = "XV"
 Output: 15
 Constraints:
 • $1 <= s.length <= 15$
 • s contains only the characters ('I', 'V', 'X', 'L', 'C', 'D', 'M').
 • It is guaranteed that s is a valid Roman numeral in the range $[1, 3999]$.
 */

#include <stdexcept>
#include <string>
using namespace std;

class Solution {
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
  int romanToInt(string s) {
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
