/*
 *
 * 313. Search in a Matrix | MEDIUM
 * You are given an m x n integer matrix and a target. Return true if the target
 * is found, otherwise false.
 * Example 1:
 * Input: matrix = [[17,36,5,82],[30,37,16,24],[25,13,34,6]], target = 13
 * Output: true
 * Example 2:
 * Input: matrix = [[13,34,25,7],[12,1,-6,20],[23,3,-34,60]], target = 73
 * Output: false
 * Constraints:
 * • m == matrix.length
 * • n == matrix[i].length
 * • 1 ≤ m, n ≤ 100
 * • -10^4 ≤ matrix[i][j], target ≤ 10^4
 *
 */

#include <vector>
using namespace std;

bool searchMatrix(vector<vector<int>> &matrix, int target) {
  int rows = matrix.size();
  int cols = matrix[0].size();

  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      if (matrix[i][j] == target) {
        return true;
      }
    }
  }

  return false;
}
