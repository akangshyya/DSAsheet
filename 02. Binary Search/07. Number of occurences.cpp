// X = 2
// Arr[] = {1, 1, 2, 2, 2, 2, 3}
// Output: 4

int first = lower_bound(arr, arr + n, x) - arr;
if (first == n || arr[first] != x)
    return 0;
int last = upper_bound(arr, arr + n, x) - arr;
return last - first;
