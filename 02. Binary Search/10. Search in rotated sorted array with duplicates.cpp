/*

Input: nums = [2,5,6,0,0,1,2], target = 0
Output: true

Input: nums = [2,5,6,0,0,1,2], target = 3
Output: false
*/

/*
If nums[mid] is equal to nums[low], we are in a situation where we can't determine which part of the array is sorted.
   In this case, we increment low and decrement high to skip the duplicate elements.
*/

int low = 0, high = nums.size() - 1;
while (low <= high) {
    int mid = low + (high - low) / 2;
    if (nums[mid] == target)
        return true;
  //only extra code needed
    if (nums[mid] == nums[low] && nums[mid] == nums[high]) {
        low++;
        high--;
        continue;
    }
    if (nums[low] <= nums[mid]) {
        if (nums[low] <= target && target <= nums[mid])
            high = mid - 1;
        else
            low = mid + 1;
    } else {
        if (nums[mid] <= target && target <= nums[high])
            low = mid + 1;
        else
            high = mid - 1;
    }
}
return false;

