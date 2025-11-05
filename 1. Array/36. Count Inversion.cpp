/*
Given an array of integers. Find the Inversion Count in the array.
Inversion Count: For an array, inversion count indicates how far (or close) the array is from being sorted. 
If the array is already sorted then the inversion count is 0.

Input: N = 5, arr[] = {2, 4, 1, 3, 5}
Output: 3
Explanation: The sequence 2, 4, 1, 3, 5 has three inversions (2, 1), (4, 1), (4, 3).
*/

//1st approach : 2 loops. next loop from i+1.
//2nd approach: Merge Sort Algorithm.
//The idea is to divide the array into two halves, recursively count the inversions in each half, 
//and then merge the two halves while counting the inversions across them.

//main function calling mergesort
long long int inversionCount(long long arr[], long long N) {
    return mergesort(0, N - 1, arr);
}

//merge sorting
int mergesort(long long start, long long end, long long arr[]) {
    int cnt=0;
    if (start >= end)
        return cnt;
    long long mid = start + (end - start) / 2;
    cnt +=mergesort(start, mid, arr);
    cnt +=mergesort(mid + 1, end, arr);
    cnt +=merge(start, mid, end, arr);
}

//actual logic to count inversions
long long int merge(long long start, long long mid, long long end, long long arr[]) {
    int cnt =0;
    long long leftsize = mid - start + 1;
    long long rightsize = end - mid;
    long long left[leftsize], right[rightsize];
    
    for (long long i = 0; i < leftsize; i++) {
        left[i] = arr[start + i];
    }
    for (long long i = 0; i < rightsize; i++) {
        right[i] = arr[mid + 1 + i];
    }
    
    long long i = 0, j = 0, k = start;
    while (i < leftsize && j < rightsize) {
        if (left[i] > right[j]) {
            cnt += leftsize - i;
            arr[k++] = right[j++];
        } else {
            arr[k++] = left[i++];
        }
    }
    while (i < leftsize) {
        arr[k++] = left[i++];
    }
    while (j < rightsize) {
        arr[k++] = right[j++];
    }
    return cnt;
}
/*
TIME COMPLEXITY: O(N log N), where N is the size of the array. merge sort TC.
SPACE COMPLEXITY: O(N). temp array
*/
