/*
Input: intervals = [[1,3],[2,6],[8,10],[15,18]]
Output: [[1,6],[8,10],[15,18]]
*/
sort(intervals.begin(), intervals.end());
vector<vector<int>> ans;
ans.push_back(intervals[0]);
for(int i = 1; i < intervals.size(); i++){
    if(ans.back()[1] >= intervals[i][0]){
        ans.back()[1] = max(ans.back()[1], intervals[i][1]);
    }else{
        ans.push_back(intervals[i]);
    }
}
    
return ans;
/*
TIME COMPLEXITY: O(nlogn), where n is the number of intervals in the input.
The sorting step takes O(nlogn) time, and the merging step takes O(n) time.
*/
