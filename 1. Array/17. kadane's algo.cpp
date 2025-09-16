//Maximum Subarray

if (nums.empty()) return 0;
        
int sum=0, maxi=INT_MIN;
for(int i=0; i<nums.size(); i++){
    sum=max(nums[i], sum+nums[i]);
    maxi=max(maxi, sum);
}
return maxi;
