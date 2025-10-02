// 1. If n % 4 == 0, the XOR value is n.
// 2. If n % 4 == 1, the XOR value is 1.
// 3. If n % 4 == 2, the XOR value is n+1.
// 4. If n % 4 == 3, the XOR value is 0.

//(4-7)= (1^2^3)^(1^2^3^4^5^6^7)
int func(int n){
  if(n%4==0) return n;
  else if(n%4==1) return 1;
  else if(n%4==2) return n+1;
  else (n%4==3) return 0;
}
return func(L-1) ^ func(R);
