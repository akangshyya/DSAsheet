//Given an array of N positive integers where all numbers occur an even number of times except one number which 
//occurs an odd number of times. Find the exceptional number.
//XOR of a^a=0
int xr = 0;
for (int i = 0; i < n; i++) {
  xr = xr ^ arr[i];
}
return xr;
