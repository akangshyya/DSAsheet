int count=0;
int maxx=0;
for(int i=0; i<nums.length; i++){
  if(nums[i]==1){
   count++;
   if(count>maxx){
    maxx=count;
    }//maxx=max(maxx, count);
  }
  else count=0;
}
return maxx;

