// [1,1,1,2,2,4,5,5,5]
// ans= [1,2,4,5,_,_,_,_,_]
// rearrange the array in the same array
// output should be int till what index reaarange will happen

int j=0;
for(int i=0; i<arr.size(); i++){
  if(arr[i] > arr[j]){
    j++;
    arr[j]=arr[i];
  }
}
return j+1;
