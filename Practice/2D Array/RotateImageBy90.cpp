/*
 *
 * 54. Rotate Image | MEDIUM
 * You are given an n x n 2D matrix representing an image, rotate the image by
 * 90 degrees (clockwise).
 *
 * You have to rotate the image in-place, which means you have to modify the
 * input 2D matrix directly. DO NOT allocate another 2D matrix and do the
 * rotation.
 * Example 1:
 *  Input: matrix = [[5,1,9,11],[2,4,8,10],[13,3,6,7],[15,14,12,16]]
 * Output:[[15,13,2,5],[14,3,4,1],[12,6,8,9],[16,7,10,11]]
 * Explanation: Each column from left to right becomes a row from bottom to top.
 * Column 0 (5,2,13,15) reversed becomes (top row). Column 1 (1,4,3,14) reversed
 * becomes (second row), and so on
 * Example 2:
 *  Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
 * Output: [[7,4,1],[8,5,2],[9,6,3]]
 * Explanation: Column 0 (1,4,7) reversed becomes (top row). Column 1 (2,5,8)
 * reversed becomes (middle row). Column 2 (3,6,9) reversed becomes (bottom
 * row). The leftmost column always becomes the top row when rotated 90 degrees
 * counter-clockwise
 *
 * Constraints:
 * • n == matrix.length
 * • n == matrix[i].length (the matrix is square)
 * • 1 <= n <= 20 (size of the matrix)
 * • -1000 <= matrix[i][j] <= 1000 (range of matrix element values)
 *
 */

#include <vector>
using namespace std;

void transpose(vector<vector<int>>& mat, int n) {
    for(int i = 0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            swap(mat[i][j], mat[j][i]);
        }
    }
}

vector<vector<int>> rotate(vector<vector<int>>& matrix) {
    int n = matrix.size();
    int m = matrix[0].size();
    if(n != m) {
        return {{-1}};
    }

    transpose(matrix, n);

    // use 2 pointers to flip the transpose
    for(int i = 0; i<n; i++) {
        int colStart = 0, colEnd = matrix[i].size()-1;
        while(colStart < colEnd) {
            swap(matrix[i][colStart], matrix[i][colEnd]);
            colStart++;
            colEnd--;
        }
    }

    return matrix;
}
