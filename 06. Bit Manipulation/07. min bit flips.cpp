//given start -> flip bits to get end

int cnt = 0;
int n=start^end;
while(n!=0){
  if(n&1==1) cbt++;
  n=n>>1;
}
return cnt;
