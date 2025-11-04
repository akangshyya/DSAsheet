//same as before used logic.
//instead of else we using if so that we don't skip storing pref_sum.

unordered_map<int, int> mp;
mp[0] = -1;
int pref_sum = 0;
int ans = 0;

for (int i = 0; i < n; i++){
  pref_sum += A[i];
  if (mp.find(pref_sum-k) != mp.end()){
    ans = max(ans, i - mp[pref_sum-k]);
  }
  // store first occurrence only (separate from the if above)
  if (mp.find(pref_sum) == mp.end())
    mp[pref_sum] = i;
}
return ans;
