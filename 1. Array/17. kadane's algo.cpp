int curr_sum = 0;
int ans = INT_MIN;
for (int i = 0; i < nums.size(); i++)
{
    curr_sum += nums[i];
    ans = max(ans, curr_sum);
    if (curr_sum < 0)
        curr_sum = 0;
}
return ans;
