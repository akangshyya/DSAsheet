// Input: N = 6
// Output: 7
// Explanation:
// The binary representation of 6 is 110.
// After setting the rightmost unset bit, it becomes 111 which is 7.

// Input: N = 15
// Output: 15
// Explanation:
// The binary representation of 15 is 1111.
// Since there are no unset bits, it remains the same.

if(isPowerOfTwo(N+1))
  return N;

int ans = (N | (N+1));
return ans;
