/*
 * 55. Rotate a Matrix by 180 Counterclockwise | MEDIUM
 * Given a 2D square matrix mat[][]of size n x n, rotate it by 180 degrees
 * without using extra space. You must rotate the matrix in-place and modify the
 * input matrix directly. Note: Rotating 180° clockwise or anticlockwise gives
 * the same result.
 *
 * Example 1:
 * Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
 * Output: [[9,8,7],[6,5,4],[3,2,1]]
 * Explanation: The output matrix is the input matrix rotated by 180 degrees
 * Example 2:
 * Input: matrix = [[1,2],[3,4]]
 * Output: [[4,3],[2,1]]
 * Explanation: The output matrix is the input matrix rotated by 180 degrees
 * Constraints:
 * • 1 <= n <= 1000 (size of the matrix)
 * • -10^9 <= mat[i][j] <= 10^9 (range of matrix elements)
 * • You cannot use extra space for another matrix
 */

#include <vector>
using namespace std;

// same logic for clockwise/counter-clockwise since both end the matrix in same position
vector<vector<int>> rotateMatrix(vector<vector<int>> &mat) {
  // use 2 pointers
  int rows = mat.size();
  if (rows < 1) {
    return {{-1}};
  }
  int cols = mat[0].size();

  int i = 0;
  while (i < cols) {
    int rowUp = 0, rowDown = rows - 1;
    while (rowUp < rowDown) {
      swap(mat[rowUp][i], mat[rowDown][i]);
      rowUp++, rowDown--;
    }
    i++;
  }

  for (int i = 0; i < rows; i++) {
    int colStart = 0, colEnd = cols - 1;
    while (colStart < colEnd) {
      swap(mat[i][colStart], mat[i][colEnd]);
      colStart++;
      colEnd--;
    }
  }

  return mat;
}
