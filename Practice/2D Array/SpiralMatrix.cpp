/*
 * 49. Spiral Matrix | MEDIUM
 * Given an m × n matrix, return all elements of the matrix in spiral order
 * (clockwise, starting from the top-left element).
 *
 * Example 1:
 * Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
 * Output: [1,2,3,6,9,8,7,4,5]
 * Example 2:
 * Input: matrix = [[1,2,3,4],[5,6,7,8],[9,10,11,12]]
 * Output: [1,2,3,4,8,12,11,10,9,5,6,7]
 * Constraints:
 * • m == matrix.length
 * • n == matrix[i].length
 * • 1 <= m, n <= 10
 * • -100 <= matrix[i][j] <= 100
 */

#include <vector>
using namespace std;

void printRowStraight(vector<vector<int>> &mat, vector<int> &res, int r, int c1,
                      int c2) {
  while (c1 <= c2) {
    res.push_back(mat[r][c1]);
    c1++;
  }
}
void printRowReverse(vector<vector<int>> &mat, vector<int> &res, int r, int c2,
                     int c1) {
  while (c2 >= c1) {
    res.push_back(mat[r][c2]);
    c2--;
  }
}
void printColStraight(vector<vector<int>> &mat, vector<int> &res, int c, int r1,
                      int r2) {
  while (r1 <= r2) {
    res.push_back(mat[r1][c]);
    r1++;
  }
}
void printColReverse(vector<vector<int>> &mat, vector<int> &res, int c, int r2,
                     int r1) {
  while (r2 >= r1) {
    res.push_back(mat[r2][c]);
    r2--;
  }
}

vector<int> spiralOrder(vector<vector<int>> &matrix) {
  int r = matrix.size(), c = matrix[0].size();

  vector<int> res;

  int r1 = 0, r2 = r - 1, c1 = 0, c2 = c - 1;

  while (r1 >= 0 && r1 <= r2 && c1 >= 0 && c1 <= c2) {
    printRowStraight(matrix, res, r1, c1, c2);
    r1++;
    printColStraight(matrix, res, c2, r1, r2);
    c2--;
    if (r1 <= r2) { // to avoid printing twice in case where there are just a
                    // single row left
      printRowReverse(matrix, res, r2, c2, c1);
      r2--;
    }
    if (c1 <= c2) { // to avoid printing twice in case where there are just a
                    // single column left
      printColReverse(matrix, res, c1, r2, r1);
      c1++;
    }
  }

  return res;
}
