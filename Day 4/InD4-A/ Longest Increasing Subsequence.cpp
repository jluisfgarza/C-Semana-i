/**
Longest Increasing Subsequence
Given an unsorted array of integers, find the length of longest increasing
subsequence.
For example,
Given [10, 9, 2, 5, 3, 7, 101, 18],
The longest increasing subsequence is [2, 3, 7, 101], therefore the length is 4.
Note that there may be more than one LIS combination, it is only necessary for
you to return the length.
Your algorithm should run in O(n2
) complexity.
Follow up: Could you improve it to O(n log n) time complexity?
**/

class Solution {
public:
    int binary_search(vector<int>& vec, int target) {
      int low = 0, high = vec.size() - 1;
      while (low < high) {
          int mid = (low + high) / 2;
          if (target > vec[mid]) {
              low = mid + 1;
          } else {
              high = mid;
          }
      }
      if (low == (int)vec.size() - 1 && vec[low] < target) low++;
      return low;
  }

  int lengthOfLIS(vector<int>& nums) {
      vector<int> dp;
      for (int i : nums) {
          int idx = binary_search(dp, i);
          if (idx > (int)dp.size() - 1) {
              dp.push_back(i);
          } else {
              dp[idx] = i;
          }
      }
      return dp.size();
  }
};
