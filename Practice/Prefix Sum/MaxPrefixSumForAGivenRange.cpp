/*
 * 43. Maximum Prefix Sum for a Given Range | EASY
 * You are given an array arr of integers and a list of queries. Each query
 * consists of two indices, leftIndex and rightIndex, defining a range in the
 * array.
 *
 * For each query, calculate the maximum prefix sum within the given range. A
 * prefix sum is the sum of all elements from the start of the range up to a
 * certain point within the range.
 *
 * Example 1:
 * Input: arr = [-1,2,3,-5], leftIndex = [0,1], rightIndex = [3,3]
 * Output: [4,5]
 * Explanation: For the range [0, 3], the prefix sums are [-1, 1, 4, -1]. The
 * maximum is 4. For the range [1, 3], the prefix sums are [2, 5, 0]. The
 * maximum is 5. Example 2: Input: arr = [1,-2,3,4,-5], leftIndex = [0,2,1],
 * rightIndex = [4,3,3] Output: [6,7,5] Explanation: For the range [0, 4], the
 * prefix sums are [1, -1, 2, 6, 1]. The maximum is 6. For the range [2, 3], the
 * prefix sums are [3, 7]. The maximum is 7. For the range [1, 3], the prefix
 * sums are [-2, 1, 5]. The maximum is 5.
 *
 * Constraints:
 * • 1 ≤ arr.length ≤ 10^6
 * • -10^4 ≤ arr[i] ≤ 10^4
 * • Number of queries ≤ 10^4
 * • 0 ≤ leftIndex ≤ rightIndex < arr.length
 */

#include <vector>
using namespace std;

int maxPrefixSum(vector<int> &arr, int left, int right) {
  int n = arr.size();
  if (left >= n || right >= n || left > right)
    return 0;
  int maxS = INT_MIN, sum = 0;
  for (int i = left; i <= right; i++) {
    sum += arr[i];
    maxS = max(maxS, sum);
  }
  return maxS;
}

vector<int> maxPrefixes(vector<int> &arr, vector<int> &leftIndex,
                        vector<int> &rightIndex) {
  // Your code here
  vector<int> ans;
  int n = leftIndex.size();
  if (n != rightIndex.size())
    return {};

  for (int i = 0; i < n; i++) {
    ans.push_back(maxPrefixSum(arr, leftIndex[i], rightIndex[i]));
  }

  return ans;
}
