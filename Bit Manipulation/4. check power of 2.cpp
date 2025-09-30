//Given an integer n, return true if it is a power of two. Otherwise, return false.
if(n <= 0)
  return false;
if(n & (n-1))
  return false;
return true;
