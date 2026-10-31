/*
 * 300. Defanging an IP Address | EASY | Solved
 Given a valid (IPv4) IP address, return a defanged version of that IP address.

 A defanged IP address replaces every period "." with "[.]".

 Example 1:
 Input: address = "1.1.1.1"
 Output: "1[.]1[.]1[.]1"
 Example 2:
 Input: address = "215.63.178.20"
 Output: "215[.]63[.]178[.]20"
 Constraints:
 • The given address is a valid IPv4 address.
 */

#include <string>
using namespace std;

string defangIPaddr(string address) {
  int len = address.size();
  string ans = "";
  for (int i = 0; i < len; i++) {
    if (address[i] == '.') {
      ans += "[.]";
    } else {
      ans += address[i];
    }
  }

  return ans;
}
