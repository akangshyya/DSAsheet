//Boyer-Moore Majority Vote algorithm

/*
1. Initialize two candidate variables, c1 and c2, and their corresponding vote counters, vote1 and vote2.
2. Iterate through the array:
   - If the current element matches c1, increment vote1.
   - Else if the current element matches c2, increment vote2.
   - Else if vote1 is 0, assign the current element to c1 and set vote1 to 1.
   - Else if vote2 is 0, assign the current element to c2 and set vote2 to 1.
   - Else, decrement both vote1 and vote2.
3. After finding the potential candidates, count the occurrences of each candidate using cnt1 and cnt2.
4. If cnt1 is greater than ⌊ n/3 ⌋, add c1 to the result vector.
5. If cnt2 is greater than ⌊ n/3 ⌋ and c2 is different from c1, add c2 to the result vector.
6. Return the result vector containing the elements that appear more than ⌊ n/3 ⌋ times.
*/

int cand1 = 0, cand2 = 0;
int count1 = 0, count2 = 0;

for (int num : nums) {
    if (num == cand1) {
        count1++;
    else if (num == cand2) {
        count2++;
    else if (count1 == 0) {
        cand1 = num;
        count1 = 1;
    }else if (count2 == 0) {
        cand2 = num;
        count2 = 1;
    }else{
        count1--;
        count2--;
    }
}

// Step 2: Verify candidates
count1 = 0, count2 = 0;
for (int num : nums) {
    if (num == cand1) count1++;
    else if (num == cand2) count2++;
}

vector<int> result;
if (count1 > n / 3) result.push_back(cand1);
if (count2 > n / 3) result.push_back(cand2);

return result;
