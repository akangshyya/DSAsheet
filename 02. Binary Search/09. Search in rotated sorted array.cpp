/*
Input: nums = [4,5,6,7,0,1,2], target = 0
Output: 4

Input: nums = [4,5,6,7,0,1,2], target = 3
Output: -1
*/

int search(vector<int>& nums, int target) {
    int low = 0, high = nums.size() - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target)
            return mid;
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
    return -1;
}

// TIME COMPLEXITY: O(log n)
// SPACE COMPLEXITY: O(1)
