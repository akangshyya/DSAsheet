// nums = [-1,0,1,2,-1,-4]
// Output: [[-1,-1,2],[-1,0,1]]
//sum==0

/*
APPROACH:
To find all triplets that sum up to zero, we can follow these steps:
1. Sort the input array in non-decreasing order.
2. Iterate through the array and fix the first element as nums[k] (where k = 0 to n-1).
3. Use two pointers (i and j) to find the other two elements such that nums[i] + nums[j] = -nums[k].
4. Move the pointers accordingly to find all possible triplets.
5. Skip duplicate elements to avoid duplicate triplets.
6. Return the resulting triplets.
*/
//Approach 1- 3 for loops if 3 elements ==0, add ans to the output

//Approach 2-
sort(nums.begin(), nums.end());
int n = nums.size();
for (int i = 0; i < n - 2; i++) {
    // Skip duplicates for the first element
    if (i > 0 && nums[i] == nums[i - 1])
      continue;

    int left = i + 1;
    int right = n - 1;
    int target = -nums[i];

    while (left < right) {
        int sum = nums[left] + nums[right]; // sum=-nums[i]
        if (sum == target) {
            result.push_back({nums[i], nums[left], nums[right]});
            // Skip duplicates for the second element
            while (left < right && nums[left] == nums[left + 1])
                left++;
            // Skip duplicates for the third element
            while (left < right && nums[right] == nums[right - 1])
                right--;

            left++;
            right--;
        } else if (sum < target) {
            left++;
        } else {
            right--;
        }
    }
}
return result;
