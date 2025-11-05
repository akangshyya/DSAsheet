//Given an array arr[] of size N, check if it is sorted in non-decreasing order or not.
bool arraySortedOrNot(int arr[], int n) {
    return solve(arr, 0, n - 1);
}

bool solve(int arr[], int low, int high) {
    if (low >= high)
        return true;
    
    int mid = low + (high - low) / 2;
    if (arr[mid] <= arr[mid + 1] && solve(arr, low, mid) && solve(arr, mid + 1, high))
        return true;
    
    return false;
}
