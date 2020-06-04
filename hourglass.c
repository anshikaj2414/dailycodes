//hour_glass 2d_array cprogram DataStructure
//Logic
int hourglassSum(int arr_rows, int arr_columns, int** arr) {
            int max_sum= INT_MIN;
            for(int i=0;i<=3;i++){
                for(int j=0;j<=3;j++){
                    int current_sum=arr[i][j]+arr[i][j+1]+arr[i][j+2]+arr[i+1][j+1]+arr[i+2][j]+arr[i+2][j+1]+arr[i+2][j+2];
                    if(current_sum>max_sum){
                        max_sum=current_sum;
                    }
                }
            }
            return max_sum;

}

/*Input (stdin)

1 1 1 0 0 0
0 1 0 0 0 0
1 1 1 0 0 0
0 0 2 4 4 0
0 0 0 2 0 0
0 0 1 2 4 0
Your Output (stdout)
19

Expected Output
19
*/
