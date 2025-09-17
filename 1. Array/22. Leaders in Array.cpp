//Given an array A of positive integers. Your task is to find the leaders in the array.
//An element of the array is a leader if it is greater than or equal to all the elements to its right side. 
//The rightmost element is always a leader.

    vector<int> leaders;
    int max_from_right = nums.back();  // Initialize with the last element
    leaders.push_back(max_from_right);

    // Traverse from second last to first
    for (int i = nums.size() - 2; i >= 0; --i) {
        if (nums[i] > max_from_right) {
            max_from_right = nums[i];
            leaders.push_back(nums[i]);
        }
    }

    reverse(leaders.begin(), leaders.end()); // Optional: reverse to maintain input order
    return leaders;
