/*
You are given a sorted array consisting of only integers where every element appears exactly twice, 
except for one element which appears exactly once.
Return the single element that appears only once.
*/
int low = 0, high = nums.size() - 1;
while (low < high) {
    int mid = low + (high - low) / 2;
    if (mid % 2 == 0) {
        if (nums[mid] == nums[mid + 1])
            low = mid + 1;
        else
            high = mid;
    } else {
        if (nums[mid] != nums[mid + 1])
            low = mid + 1;
        else
            high = mid;
    }
}
return nums[low];
// 2nd approach: XOR
