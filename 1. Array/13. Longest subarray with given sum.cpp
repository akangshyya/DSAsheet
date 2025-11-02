// 'A' = [1, 2, 3, 1, 1, 1, 1]
// Output: 3
// Explanation: Subarrays whose sum = '3' are:
// [1, 2], [3], [1, 1, 1], [1, 1, 1]
int start = 0;
int ans = 0;
long long sum = 0;
int n = a.size();
for (int i = 0; i < n; i++){
    sum += a[i];
    while (sum > k){
        sum -= a[start];
        start++;
    }
    if (sum == k)
        ans = max(ans, i - start + 1);
}
return ans;
