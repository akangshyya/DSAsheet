/*
Given an integer array nums, find a subarray that has the largest product, and return the product.
Input: nums = [-2, -3, -4]
Output: 12 , [-3, -4] has the largest product 6.


Left to right:
-2 → -2*-3 = 6 * -4 = -24
Max = 6

Right to left:
-4 → -4 * -3 = 12 * -2 = -24 
→ Max = 12 

run loop twice so that signs are checked properly.
*/

int ans = INT_MIN;
int prdct = 1;
// Iterate from left to right
for (int i = 0; i < nums.size(); i++) {
    prdct = prdct * nums[i];
    ans = max(ans, prdct);
    if (prdct == 0)
        prdct = 1;
}

prdct = 1;
// Iterate from right to left
for (int i = nums.size() - 1; i >= 0; i--) {
    prdct = prdct * nums[i];
    ans = max(ans, prdct);
    if (prdct == 0)
        prdct = 1;
}
return ans;
