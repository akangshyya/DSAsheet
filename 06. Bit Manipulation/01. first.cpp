// Get the ith bit
if (num & (1 << i))
  cout << 1 << " ";
else
  cout << 0 << " ";
    
// Set the ith bit
int set = num | (1 << i);
cout << set << " ";
    
// Clear the ith bit
int clear = num & (~(1 << i));
cout << clear;
