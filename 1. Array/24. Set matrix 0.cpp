// To solve this problem in-place, we can follow these steps:
// 1. Use two boolean variables, firstRowZero and firstColZero, to check if the first row and first column contain zeros initially.
// 2. Iterate through the matrix and if an element is zero, set the corresponding element in the first row and first column to zero.
// 3. Iterate through the matrix again, excluding the first row and first column. If an element in the first row or first column is zero, set the current element to zero.
// 4. Finally, based on the values in firstRowZero and firstColZero, set the first row and first column to zero if needed.

int m=matrix.size();
        int n=matrix[0].size();
        
        //col-->[0][...]  row-->[...][0]
        bool col0=false;

        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(matrix[i][j]==0){
                    matrix[i][0]=0;
                    if(j!=0){
                        matrix[0][j]=0;
                    } 
                    else{
                        col0=true;
                    } 
                }
            }
        }
        for(int i=1; i<m; i++){
            for(int j=1; j<n; j++){
                if(matrix[i][j]!=0){
                    if(matrix[0][j]==0 || matrix[i][0]==0){
                        matrix[i][j]=0;
                    }
                }
            }
        }
        if(matrix[0][0]==0){
            for (int j=0; j<n; j++) {
                matrix[0][j]=0;
            }
        }
        if(col0){
            for(int i=0; i<m; i++){
                matrix[i][0]=0;
            }
        }
