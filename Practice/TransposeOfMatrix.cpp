/*
 * 48. Transpose of Matrix | EASY | Solved
 * Given a square matrix of size n x n, find its transpose. The transpose of a
 * matrix is obtained by converting all rows into columns and all columns into
 * rows. Modify the matrix in-place and return it.
 *
 * Example 1:
 * Input: mat = [[1, 1, 1, 1], [2, 2, 2, 2], [3, 3, 3, 3], [4, 4, 4, 4]]
 * Output: [[1, 2, 3, 4], [1, 2, 3, 4], [1, 2, 3, 4], [1, 2, 3, 4]]
 * Explanation: Converting rows into columns and columns into rows.
 * Example 2:
 * Input: mat = [[1, 2], [9, -2]]
 * Output: [[1, 9], [2, -2]]
 * Explanation: Converting rows into columns and columns into rows.
 * Constraints:
 * • 1 ≤ n ≤ 10^3
 */

#include <vector>
using namespace std;

/*
 * Using an extra matrix to store the transpose
 * [Generic solution]
 */
vector<vector<int>> transpose(vector<vector<int>> &mat) {
  int m = mat.size();
  int n = mat[0].size();

  vector<vector<int>> result(n, vector<int>(m));

  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      result[j][i] = mat[i][j];
    }
  }

  return result;
}

/*
 * Without using extra matrix to store the transpose
 * [This solution is possible ONLY WHEN the transpose is also a square matrix]
 */
// vector<vector<int>> transpose(vector<vector<int>> &mat) {
//   int m = mat.size();
//   int n = mat[0].size();
//   for (int i = 0; i < m; i++) {
//     for (int j = i + 1; j < n; j++) {
//       swap(mat[i][j], mat[j][i]);
//     }
//   }
//
//   return mat;
// }
