//extended version of the previous one

//Given an array of integers nums and an integer k, return the total number of subarrays whose sum equals to k.
//To find the total number of subarrays with sum equal to k, we can use the technique of prefix sum along with a hashmap.

int pref_sum = 0;
unordered_map<int, int> mp;
int ans = 0;

for (int i = 0; i < nums.size(); i++){
    pref_sum += nums[i];

    if (pref_sum == k)
        ans++;

    if (mp.find(pref_sum - k) != mp.end()){
        ans += mp[pref_sum - k];
    }

    mp[pref_sum]++;
}

return ans;
