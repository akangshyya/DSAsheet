
// Given an array with both positive and negative integers,
//we need to compute the length of the largest subarray with a sum of 0.

// A[] = {15, -2, 2, -8, 1, 7, 10, 23}
// Output: 5
// Explanation: The largest subarray with a sum of 0 will be -2, 2, -8, 1, 7.

unordered_map<int, int> mp;
mp[0] = -1;
int pref_sum = 0;
int ans = 0;

for (int i = 0; i < n; i++){
  pref_sum += A[i];
  if (mp.find(pref_sum) != mp.end()){
    ans = max(ans, i - mp[pref_sum]);
  }else
    mp[pref_sum] = i;
}
return ans;
