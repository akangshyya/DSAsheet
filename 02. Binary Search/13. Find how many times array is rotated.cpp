/*
Given an ascending sorted rotated array Arr of distinct integers of size N. The array is right rotated K times. 
Find the value of K.
Arr[] = {5, 1, 2, 3, 4}
Output: 1
(We can see that the array was rotated 1 times to the right.)
*/
int low = 0, high = n - 1;
while (low < high) {
    int mid = low + (high - low) / 2;
    if (arr[mid] > arr[n - 1])
        low = mid + 1;
    else
        high = mid;
}
return low;
