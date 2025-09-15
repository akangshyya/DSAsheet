int prev=-1;
int curr=arr[0];
for(int i=0; i<arr.size(); i++){
  if(arr[i]>curr){
    prev=curr;
    curr=arr[i];
  }
  else if(arr[i]>prev && arr[i]!=curr){
    prev=arr[i];
  }
}
return prev;
