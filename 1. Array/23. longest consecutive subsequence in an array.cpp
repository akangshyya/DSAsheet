//approach 1-
sort(nums.begin(), nums.end()); // O(n log n)
int longestStreak = 1;
int currentStreak = 1;

for (int i = 1; i < nums.size(); ++i) {
  if (nums[i] == nums[i - 1]) {
    continue;
  } 
  if (nums[i] == nums[i - 1] + 1) {
    currentStreak++;
  } else {
    currentStreak = 1;
  }
  longestStreak = max(longestStreak, currentStreak);
}
return longestStreak;

//approach 2-
set<int> numSet(nums.begin(), nums.end()); // O(n log n)
int longestStreak = 0;

for (int num : numSet) {
  if (numSet.find(num - 1) == numSet.end()) { // if num-1 not there then it might be the start of a new sequence
            // Start of a sequence
    int currentNum = num;
    int currentStreak = 1;

    while (numSet.find(currentNum + 1) != numSet.end()) {
        currentNum++;
        currentStreak++;
    }

    longestStreak = max(longestStreak, currentStreak);
    }
}
return longestStreak;

//approach 3-(TLE) map
unordered_map<int, int> mp;
for (int i = 0; i < nums.size(); i++){
    mp[nums[i]]++;
}

int ans = 0;
for (int i = 0; i < nums.size(); i++){
  int start = nums[i];
        // check whehter this can be the start of the subsequence
    if (mp.find(nums[i] - 1) == mp.end()){
      int temp = 1;
      int nxt = nums[i];
      while (mp.find(nxt + 1) != mp.end()){
        temp++;
        nxt++;
      }
      ans = max(ans, temp);
    }
}
return ans;
