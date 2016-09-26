/**
Find Minimum in Rotated Sorted Array II

Suppose a sorted array is rotated at some pivot unknown to you beforehand.
(i.e., 0 1 2 4 5 6 7 might become 4 5 6 7 0 1 2).

Find the minimum element.

The array may contain duplicates.
**/

class Solution {
public:
  int findMin(vector<int> &num) {
  int lower = 0, high = num.size() - 1;
  int mid = 0;

    while (lower < high - 1) {
        if (num[lower] < num[high]) return num[lower];
        mid = lower + (high - lower) / 2;

        if (num[lower] < num[mid])
            lower = mid;
        else if (num[lower] > num[mid])
            high = mid;
        else {
            if (num[lower] == num[mid])
              ++lower;
            if (num[high] == num[mid])
              --high;
        }
    }
    if (lower == high)
      return num[lower];
    if (high > lower)
      return min(num[lower], num[high]);
    return -1;
  }
};
