/*
 * 58. Search a Sorted Matrix | MEDIUM
 * You are given an m x n integer matrix with the following two properties:
 * Each row is sorted in non-decreasing order.
 * The first integer of each row is greater than the last integer of the
 * previous row. Given an integer target, return true if target is in matrix or
 * false otherwise.
 *
 * Example 1:
 * Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 3
 * Output: true
 *
 * Example 2:
 * Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 13
 * Output: false
 *
 * Constraints:
 * • m == matrix.length
 * • n == matrix[i].length
 * • 1 ≤ m, n ≤ 100
 * • -10^4 ≤ matrix[i][j], target ≤ 10^4
 */

#include <vector>
using namespace std;

/*
 * Approach 1 - Logic explained in ./SearchSortedMatrix.md
 * Time Complexity: O(log(n + m))
 */
bool searchMatrix(const vector<vector<int>> &mat, int target) {
  int rows = mat.size();
  if (rows < 1)
    return false;
  int cols = mat[0].size();

  int r = 0, c = cols - 1;
  while (r < rows && r >= 0 && c < cols && c >= 0) {
    int current = mat[r][c];
    if (current == target) {
      return true;
    } else if (current > target) {
      c--;
    } else {
      r++;
    }
  }

  return false;
}

/*
 * Approach 2 - treat 2D array as a 1D array since elements are sorted
 * throughout the array
 * Time Complexity: O(log(n * m))
 */
// bool searchMatrix(const vector<vector<int>> &mat, int target) {
//   int rows = mat.size();
//   if (rows == 0)
//     return false;
//   int cols = mat[0].size();
//   if (cols == 0)
//     return false;
//
//   int start = 0;
//   int end = rows * cols - 1;
//
//   while (start <= end) {
//     int mid = start + (end - start) / 2;
//     // Map 1D index mid back to 2D coordinates
//     int midValue = mat[mid / cols][mid % cols];
//
//     if (midValue == target) {
//       return true;
//     } else if (midValue < target) {
//       start = mid + 1;
//     } else {
//       end = mid - 1;
//     }
//   }
//
//   return false;
// }

/*
 * Approach 3
 * Time Complexity: O(n * log(m))
 */
// int binarySearch(vector<int> &arr, int target, int size) {
//   int start = 0, end = size - 1;
//   while (start <= end) {
//     int mid = start + (end - start) / 2;
//     int curr = arr[mid];
//     if (curr == target) {
//       return mid;
//     } else if (curr < target) {
//       start = mid + 1;
//     } else
//       end = mid - 1;
//   }
//   return -1;
// }
//
// bool searchMatrix(vector<vector<int>> &matrix, int target) {
//   int n = matrix.size();
//   if (n < 1)
//     return -1;
//   int m = matrix[0].size();
//
//   for (vector<int> a : matrix) {
//     int res = binarySearch(a, target, m);
//     if (res != -1)
//       return true;
//   }
//   return false;
// }
