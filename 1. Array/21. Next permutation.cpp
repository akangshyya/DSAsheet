//1,2,3-> 1,3,2-> 2,1,3-> 2,3,1-> 3,1,2-> 3,2,1
//find arr[i]<arr[i-1] get i. Now, swap it with the next larger element from back. reverse subarray from i+1.
//2,3,1 -> find 2<3-> i=1-> swap 2,3-> 3,2,1-> reverse-> 3,1,2
//for swapping, traverse array from last

int index=-1;
for(int i = n-2; i>=0; i--){
    if(nums[i]<nums[i+1]){
        index=i;
        break;
    }
}
//edge case-> last permutation
if(index==-1){
    reverse(nums.begin(),nums.end());
    return;
}
for(int i=n-1; i>index; i--){
    if(nums[i]>nums[index]){
        swap(nums[i], nums[index]);
        break;
    }
}
reverse(nums.begin() + index + 1, nums.end());
