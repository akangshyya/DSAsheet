//also called floor function
// x = 5
// arr[] = {1,2,8,10,11,12,19}
// Output: 1
//Largest number less than 5 is 2.

long long low = 0, high = n - 1;
int ans = -1;
while (low <= high) {
    long long mid = low + (high - low) / 2;
    if (v[mid] <= x) {
        ans = mid;
        low = mid + 1;
    } else {
        high = mid - 1;
    }
}
return ans;
