// Given an array nums of n integers:
// - nums[a] + nums[b] + nums[c] + nums[d] == target
// - a, b, c, and d are distinct and in the array

//1st approach: 4 for loops: for(j=i+1->n)

//2nd approach: similar to 3sum
vector<vector<int>> ans;
    long long trgt = (long long)(target); // to handle overflow
    sort(nums.begin(), nums.end());

    for (int a = 0; a < nums.size(); a++)
    {
        for (int b = a + 1; b < nums.size(); b++)
        {
            if (a == b)
                continue;

            int c = b + 1;
            int d = nums.size() - 1;
            long long tar = trgt - (nums[a] + nums[b]);

            while (c < d)
            {
                long long sum = nums[c] + nums[d];

                if (sum == tar)
                {
                    ans.push_back({nums[a], nums[b], nums[c], nums[d]});
                    c++;
                    d--;

                    // Skip duplicate elements
                    while (c < d && nums[c] == nums[c - 1])
                        c++;
                    while (c < d && nums[d] == nums[d + 1])
                        d--;
                }
                else if (sum > tar)
                {
                    d--;
                }
                else
                {
                    c++;
                }
            }

            // Skip duplicate elements
            while (b + 1 < nums.size() && nums[b + 1] == nums[b])
                b++;
        }

        // Skip duplicate elements
        while (a + 1 < nums.size() && nums[a + 1] == nums[a])
            a++;
    }

    return ans;
