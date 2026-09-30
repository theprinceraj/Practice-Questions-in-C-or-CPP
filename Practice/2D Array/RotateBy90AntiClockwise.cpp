/*
 * 56. Rotate by 90 Degree | MEDIUM
 * Given a square matrix mat[][] of size n x n, rotate it by 90 degrees in an
 * anti-clockwise (counterclockwise) direction without using any extra space.
 * You must rotate the matrix in-place and modify the input matrix directly
 * Note: Counterclockwise and anticlockwise rotations are the same thing.
 *
 * Example 1:
 * Input: matrix = [[0,1,2],[3,4,5],[6,7,8]]
 * Output: [[2,5,8],[1,4,7],[0,3,6]]
 * Example 2:
 * Input: matrix = [[1,2],[3,4]]
 * Output: [[2,4],[1,3]]
 * Constraints:
 * • 1 <= n <= 10³ (size of the square matrix)
 * • -10⁹ <= mat[i][j] <= 10⁹ (range of matrix elements)
 * • No extra space allowed for another matrix
 */

#include <vector>
using namespace std;

void transpose(vector<vector<int>> &mat, int n) {
  for (int i = 0; i < n - 1; i++) {
    for (int j = i + 1; j < n; j++) {
      swap(mat[i][j], mat[j][i]);
    }
  }
}

vector<vector<int>> rotateMatrix(vector<vector<int>> &mat) {
  int rows = mat.size();
  int cols = mat[0].size();
  if (rows != cols) {
    return {{-1}};
  }

  transpose(mat, rows);

  // use 2 pointers to flip the transpose
  int i = 0;
  while (i < cols) {
    int rowUp = 0, rowDown = rows - 1;
    while (rowUp < rowDown) {
      swap(mat[rowUp][i], mat[rowDown][i]);
      rowUp++, rowDown--;
    }
    i++;
  }

  return mat;
}
