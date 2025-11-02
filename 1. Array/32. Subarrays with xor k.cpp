//Given an array 'A' consisting of 'N' integers and an integer 'B', 
//find the number of subarrays of array 'A' whose bitwise XOR of all elements is equal to 'B'.
/*
Input: 'N' = 4, 'B' = 2
'A' = [1, 2, 3, 2]
Output: 3
Explanation: Subarrays have bitwise xor equal to '2' are: [1, 2, 3, 2], [2], [2].
*/

int pref_xr = 0;
int ans = 0;
unordered_map<int, int> mp;
    
for(int i = 0; i < a.size(); i++){
    pref_xr = pref_xr ^ a[i];
        
    if(pref_xr == b)
        ans++;
        
    if(mp.find(pref_xr ^ b) != mp.end())
        ans += mp[pref_xr ^ b];
    
    mp[pref_xr]++;
}
return ans;
