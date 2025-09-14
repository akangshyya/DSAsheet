    int start = 0;
    int ans = 0;
    long long sum = 0;
    int n = a.size();

    for (int end = 0; end < n; end++)
    {
        sum += a[end];
        while (sum > k)
        {
            sum -= a[start];
            start++;
        }
        if (sum == k)
        {
            ans = max(ans, end - start + 1);
        }
    }
    return ans;
