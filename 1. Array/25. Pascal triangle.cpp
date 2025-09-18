//To generate the `rowIndex`th row of Pascal's triangle, 
//we can use the property that each number is the sum of the two numbers directly above it. 
//We start with the base case of the first row, which is `[1]`. 
//Then, for each subsequent row, we calculate the elements using the formula `C(n, k) = C(n-1, k-1) * (n-k+1) / k`, 
//where `C(n, k)` represents the binomial coefficient.


//given -> rowIndex in the function
vector<int> row(rowIndex + 1, 1); // Initialize the row with 1s
long long coefficient = 1;
    
for (int col = 1; col <= rowIndex; col++) {
    coefficient = coefficient * (rowIndex - col + 1) / col;
    row[col] = coefficient;
}
return row;

//TC = 0(N)
//SC= 0(N)
