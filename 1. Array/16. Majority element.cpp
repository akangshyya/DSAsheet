//Moore's voting algorithm
int candidate = nums[0];
int vote = 1;
for (int i = 1; i < nums.size(); i++)
{
    if (vote <= 0)
        candidate = nums[i];
    if (nums[i] == candidate)
        vote++;
    else
        vote--;
}
return candidate;

//map
unordered_map<int, int> freq;
int n = nums.size();
for (int num : nums) {
    freq[num]++;
    if (freq[num] > n / 2) {
        return num;
    }
}
    return -1; // No majority element
