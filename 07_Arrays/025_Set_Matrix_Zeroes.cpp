//BRUTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT

// class Solution {
// public:
//     void setZeroes(vector<vector<int>>& matrix) {
//         int m = matrix.size();
//         int n = matrix[0].size();

//         for(int i = 0 ; i < m ; i++){
//             for(int j = 0 ; j < n ;j++){

//                 if(matrix[i][j] == 0){
//                     for(int k  = 0 ; k < n ; k++ ){
//                         if(matrix[i][k] != 0){
//                             matrix[i][k] = -22 ;
//                         }
//                     }
//                     for(int l  = 0 ; l < m ; l++ ){
//                         if(matrix[l][j] != 0){
//                             matrix[l][j] = -22 ;
//                         }
//                     }
                           
//                 }

//             }
//         }

//         for(int i = 0 ; i < m ; i++){
//             for(int j = 0 ; j < n ; j++){
//                 if(matrix[i][j]==-22){
//                     matrix[i][j] = 0 ;
//                 }
//             }
//         }


//     }
// };



//O[n*n] 


class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();

        vector<int> row(m,0);
        vector<int> col(n,0);

        for(int i = 0 ; i < m ; i++){
            for(int j = 0 ; j < n ; j++){
                if(matrix[i][j] == 0){
                    row[i] = 1;
                    col[j] = 1;
                }
            }
        }

        for(int i = 0 ; i < m ; i++){
            for(int j = 0 ; j < n ; j++){
                if(row[i] == 1 || col[j] == 1){
                    matrix[i][j] = 0;
                }

            }
        }
    }
};