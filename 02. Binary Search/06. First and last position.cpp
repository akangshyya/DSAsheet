//Given an array of integers nums sorted in non-decreasing order, find the starting and ending position of a given target value.
// Input: nums = [5,7,7,8,8,10], target = 8
// Output: [3,4]
int first = lower_bound(nums.begin(), nums.end(), target) - nums.begin();
// if the target is not found, return [-1, -1]
if (first == nums.size() || nums[first] != target)
    return {-1, -1};
int last = upper_bound(nums.begin(), nums.end(), target) - nums.begin();
return {first, last-1};
