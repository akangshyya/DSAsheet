/*
Given a boolean 2D array of n x m dimensions where each row is sorted. 
Find the 0-based index of the first row that has the maximum number of 1's.
N = 4 , M = 4
Arr[][] = {{0, 1, 1, 1},
           {0, 0, 1, 1},
           {1, 1, 1, 1}, <- 2
           {0, 0, 0, 0}}
Output: 2
(Row 2 contains 4 1's (0-based indexing))
*/
int j = m - 1;
int i = 0;
int ans = -1;
while (j >= 0 && i < n){
    while (arr[i][j] == 1){
        ans = i;
        j--;
    }
    if (i < n)
        i++;
}
return ans;
// TC=O(N+M)
