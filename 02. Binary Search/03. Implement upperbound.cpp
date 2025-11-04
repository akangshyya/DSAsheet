//ceiling function
//X = 7
// Arr[] = {5, 5, 5, 6, ,6, 6, 8, 9}
// Output: 6
//smallest num greater than 7 is 8.

int low = 0, high = n-1;
int ans = -1;
while(low<=high){
    int mid = low+(high-low)/2;
    if(arr[mid]>=x){
        ans = mid;
        high = mid-1;
    }
    else{
        low = mid+1;
    }
}
return ans;
