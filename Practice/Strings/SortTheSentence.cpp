/*
 * 304. Sorting the Sentence | EASY
 A sentence is a list of words that are separated by a single space with no
 leading or trailing spaces. Each word consists of lowercase and uppercase
 English letters. A sentence can be shuffled by appending the 1-indexed word
 position to each word then rearranging the words in the sentence. For example,
 the sentence "This is a sentence" can be shuffled as "sentence4 a3 is2 This1"
 or "is2 sentence4 This1 a3". Given a shuffled sentence s containing no more
 than 9 words, reconstruct and return the original sentence.

 Example 1:
 Input: s = "is2 sentence4 This1 a3"
 Output: "This is a sentence"
 Constraints:
 • 2 <= s.length <= 200
 • s consists of lowercase and uppercase English letters, spaces, and digits
 from 1 to 9. • The number of words in s is between 1 and 9 • The words in s are
 separated by a single space. • s contains no leading or trailing spaces.
 */

#include <string>
#include <vector>
using namespace std;

class Solution {
public:
  string sortSentence(string s) {
    vector<string> pos(
        10); // since there are at most 10 words in the given sentence
    string word = "";
    for (int i = 0; i <= s.size(); i++) {
      if (i == s.size() || s[i] == ' ') {
        int p = word.back() - '0';
        word.pop_back();
        pos[p - 1] = word;
        word = "";
      } else {
        word += s[i];
      }
    }
    string result = "";
    for (int j = 0; j < pos.size(); j++) {
      if (pos[j].empty())
        continue; // so extra space do not get accumulated in the end of result
                  // string
      if (j == 0) {
        result += pos[j];
      } else {
        result += ' ' + pos[j];
      }
    }

    return result;
  }
};
