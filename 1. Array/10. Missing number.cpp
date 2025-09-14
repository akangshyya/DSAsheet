//Approach 1:
int n = nums.size();
long long optimum_sum = (n * (n + 1)) / 2; // the sum if no number is absent
long long actual_sum = 0;
for (auto it : nums)
{
    actual_sum += it;
}
return optimum_sum - actual_sum;

//Approach 2:
int x=0;
for(int i=0; i<nums.size(); i++){
    x=x^i^nums[i];
}
x=x^nums.size();
return x;
