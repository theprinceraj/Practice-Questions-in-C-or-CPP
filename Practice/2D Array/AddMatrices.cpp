
/*
 * 314. Add Two Matrix | EASY | Solved
 * You are given two matrices mat1 and mat2. Your task is to add them and return
 * the resultant matrix. If addition is not possible, then return a matrix
 * containing a single element -1 .
 * Example 1:
 * Input: mat1 = [[1, 2], [3, 4]], mat2 = [[1, 2], [3, 4]]
 * Output: [[2, 4], [6, 8]]
 * Example 2:
 * Input: mat1 = [[1, 1], [1, 1]], mat2 = [[3, 4], [5, 6]]
 * Output: [[4, 5], [6, 7]]
 * Constraints:
 * • 1 ≤ m, n ≤ 200
 * • -10^4 <=mat[i] <= 10^4
 */

#include <vector>
using namespace std;
vector<vector<int>> addTwoMatrix(vector<vector<int>> &mat1,
                                 vector<vector<int>> &mat2) {
  int r1 = mat1.size(), c1 = mat1[0].size(), r2 = mat2.size(),
      c2 = mat2[0].size();

  if (r1 != r2 || c1 != c2)
    return {{-1}};

  vector<vector<int>> result(r1, vector<int>(c1));

  for (int i = 0; i < r1; i++) {
    for (int j = 0; j < c1; j++) {
      result[i][j] = mat1[i][j] + mat2[i][j];
    }
  }

  return result;
}
