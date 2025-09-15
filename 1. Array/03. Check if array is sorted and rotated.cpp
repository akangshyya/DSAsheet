//[3,4,5,1,2] -> yes
//1. 5>1 -> only once
//2. 3>2 -> first>last

int cnt=0;
for(int i=0; i<arr.size(); i++){
  if(arr[i]>arr[i+1]) cnt++;
}
if(cnt==0) return true;
if(cnt==1 && arr[0]>arr[arr.size()-1]) return true;
return false;
