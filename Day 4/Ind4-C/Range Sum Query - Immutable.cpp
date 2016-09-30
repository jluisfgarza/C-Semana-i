/**
Range Sum Query - Immutable
Given an integer array nums, find the sum of the elements between indices i and
j (i ≤ j), inclusive.
Example:
Given nums = [-2, 0, 3, -5, 2, -1]
sumRange(0, 2) -> 1
sumRange(2, 5) -> -1
sumRange(0, 5) -> -3
Note:
1. You may assume that the array does not change.
2. There are many calls to sumRange function.
**/

class NumArray {
public:
    map<int,int> mp;
    NumArray(vector<int> &nums) {
        mp[-1] = 0;
        int sum = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            sum += nums[i];
            mp[i] = sum;
        }
    }
    int sumRange(int i, int j) {
        return (mp[j] - mp[i-1]);
    }
};

// Your NumArray object will be instantiated and called as such:
// NumArray numArray(nums);
// numArray.sumRange(0, 1);
// numArray.sumRange(1, 2);
