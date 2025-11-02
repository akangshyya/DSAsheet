/*
given n and array from 1to n.
1 number appear twice and one number doesn't appear.
return both.
*/

//1st: 2 loops- one loop for numbers in array other for checking cnt==2 or 0. add that.

//2nd: map

//3rd: maths
// let both the numbers be x and y.
// 1.take 2 sum one with sum of arrays and second with 1 to n.
// formula= N * (N + 1) / 2
// 2. subtract both gives x-y.
// 3. for the second equation take sum of the squares of the numbers.
// formula= N * (N + 1) * (2 * N + 1) / 6.
// 4. subtract both gives x2-y2 = (x-y)*(x+y).
// 5. put x-y gives x+y.
// 6. get x and y from both the equations.

long long n = N;
long long optSum = n * (n + 1) / 2; // Sum if all elements are present once
long long opt2Sum = n * (n + 1) * (2 * n + 1) / 6; // Optimum sum of squares
long long actSum = 0; // Actual sum of the given array
long long act2Sum = 0; // Actual sum of squares
    
for (auto it : arr) {
    actSum += it;
    act2Sum += (long long)it * (long long)it;
}
    
long long xMinusY = optSum - actSum;
long long x2MinusY2 = opt2Sum - act2Sum;
long long xPlusY = x2MinusY2 / xMinusY;
    
long long x = (xPlusY + xMinusY) / 2;
long long y = xPlusY - x;
    
return {(int)y, (int)x};

//4th : XOR

  
