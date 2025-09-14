// Input: Arr = [1, 2, 3, 4, 5]
// Output: [2, 3, 4, 5, 1]
int temp = arr[0];
  for (int i = 0; i < n - 1; i++){
      arr[i] = arr[i + 1];
  }
arr[n - 1] = temp;
return arr;
