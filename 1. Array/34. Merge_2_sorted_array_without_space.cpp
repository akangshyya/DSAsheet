/*
You are given two integer arrays nums1(m) and nums2(n), sorted.
Merge nums1 and nums2 into a single array sorted.
The final sorted array should not be returned by the function, but instead be stored inside the array nums1.

nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3
Output: [1,2,2,3,5,6]
*/

int i = m - 1; // Pointer for nums1
int j = n - 1; // Pointer for nums2
int k = m + n - 1; // Pointer for merged array nums1
    
while (i >= 0 && j >= 0) {
    if (nums1[i] > nums2[j]) {
        swap(nums1[i], nums1[k]);
        i--;
        k--;
    } else {
        swap(nums2[j], nums1[k]);
        j--;
        k--;
    }
}
    
    // Copy remaining elements from nums2 to nums1 if any
while (j >= 0) {
    swap(nums2[j], nums1[k]);
    j--;
    k--;
}
