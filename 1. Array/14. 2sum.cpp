    unordered_map<int, int> mp;
    for (int i = 0; i < nums.size(); i++)
    {
        int remain = target - nums[i];
        if (mp.find(remain) != mp.end())
            return {i, mp[remain]};
        mp[nums[i]] = i;
    }
    return {};
