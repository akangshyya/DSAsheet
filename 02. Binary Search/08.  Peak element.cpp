/*
A peak element is an element that is strictly greater than its neighbors.

Input: nums = [1,2,1,3,5,6,4]
Output: 5
return either index number 1 where the peak element is 2, or index number 5 where the peak element is 6.
*/
int n = nums.size();
for (int i = 1; i < n - 1; i++) {
    if (nums[i] > nums[i - 1] && nums[i] > nums[i + 1])
        return i;  // first peak found
}
return -1;  // no peak found
