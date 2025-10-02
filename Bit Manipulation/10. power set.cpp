int n=nums.size();
int subset=1<<n; //no. of subsets

for(int num=0; num <subset; num++){
    vector<int> arr;
    for(int i=0; i<n; i++){
        if(num & (1<<i)) arr.push_back(nums[i]);
    }
    res.push_back(arr);
}
return res;
