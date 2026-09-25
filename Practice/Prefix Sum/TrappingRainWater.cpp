/*
 * 6. Trapping Rain Water | HARD | Lecture 21
 * You are given an array arr of non-negative integers, where each element
 * represents the height of a block and each block has a width of 1. Your task
 * is to compute how much water can be trapped between the blocks after it
 * rains.
 *
 * Water can only be trapped in the valleys formed between taller blocks. The
 * amount of water trapped at any position depends on the maximum height of
 * blocks on both its left and right sides.
 *
 *
 * Example 1:
 * Input: arr = [0,1,0,2,1,0,1,3,2,1,2,1]
 * Output: 6
 * Explanation: The elevation map is represented by array
 * [0,1,0,2,1,0,1,3,2,1,2,1]. In this case, 6 units of water are trapped.
 *
 * Example 2:
 * Input: arr = [3,0,2,0,4]
 * Output: 7
 *
 * Constraints:
 * • 1 ≤ n ≤ 10^5
 * • 0 ≤ arr[i] ≤ 10^4
 */

/*
 * Time Complexity: O(2n)
 */
#include <vector>
using namespace std;

int canStore(int cIdxVal, int pMax, int sMax) {
  int ans = min(pMax, sMax) - cIdxVal;
  return ans > 0 ? ans : 0;
}

int trapWater(vector<int> &arr) {
  int n = arr.size();

  // vector<int> pMax(n); // prefix max array
  // int temp = INT_MIN;
  // for (int i = 0; i < n; i++) {
  // temp = max(temp, arr[i]);
  // pMax[i] = temp;
  // } NOT Required to be done here, can be done within the main loop itself

  vector<int> sMax(n); // suffix max array
  int temp = INT_MIN;
  for (int i = n - 1; i >= 0; i--) {
    temp = max(temp, arr[i]);
    sMax[i] = temp;
  }

  int netStored = 0, pMax = INT_MIN;
  for (int i = 0; i < n; i++) {
    // pMax ka calculation can be done within this loop itself since this
    // loop is already iterating over the array from 0 to n-1
    pMax = max(pMax, arr[i]);
    netStored += canStore(arr[i], pMax, sMax[i]);
  }

  return netStored;
}

/*
 * Time Complexity: O(3n)
 * Correct and Optimized Solution compared to the one at the bottom
 */
// #include <vector>
// using namespace std;
//
// int canStore(int cIdxVal, int pMax, int sMax) {
//   int ans = min(pMax, sMax) - cIdxVal;
//   return ans > 0 ? ans : 0;
// }
//
// int trapWater(vector<int> &arr) {
//   int n = arr.size();
//
//   vector<int> pMax(n); // prefix max array
//   int temp = INT_MIN;
//   for (int i = 0; i < n; i++) {
//     temp = max(temp, arr[i]);
//     pMax[i] = temp;
//   }
//
//   vector<int> sMax(n); // suffix max array
//   temp = INT_MIN;
//   for (int i = n - 1; i >= 0; i--) {
//     temp = max(temp, arr[i]);
//     sMax[i] = temp;
//   }
//
//   int netStored = 0;
//   for (int i = 1; i < n - 1; i++) {
//     netStored += canStore(arr[i], pMax[i], sMax[i]);
//   }
//
//   return netStored;
// }

/*
 * Solution With TLE Error
 */
// #include <vector>
// using namespace std;
//
// int canStore(vector<int>& arr, int cIdx) {
//     int heightOfCurrent = arr[cIdx];
//     int leftMax = INT_MIN, rightMax = INT_MIN;
//     int n = arr.size();
//
//     for(int i = 0; i<cIdx; i++) {
//         leftMax = max(leftMax, arr[i]);
//     }
//
//     for(int i = cIdx+1; i<n; i++) {
//         rightMax = max(rightMax, arr[i]);
//     }
//
//     int ans = min(leftMax, rightMax) - arr[cIdx];
//     return ans > 0 ? ans : 0;
// }
//
// int trapWater(vector<int>& arr) {
//     int n = arr.size();
//
//     int netStored = 0;
//     for(int i = 1; i<n-1; i++) {
//         netStored += canStore(arr, i);
//     }
//
//     return netStored;
// }
