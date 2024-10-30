///week08-3b.cpp
///LearningPlan matrix 第4題
///直覺寫出來的答案 is wrong because of 0蔓延之後，0太多了
///FIN ver.
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int M = matrix.size(), N = matrix[0].size();
        vector<int> up(N); ///宣告一陣列，放在上面up，用來打勾勾標註 有哪幾直條要刪
        vector<int> left(M);///宣告一陣列，放在左邊left，用來打勾勾標註 有哪幾橫條要刪
        for(int i=0; i<M; i++){
            for(int j=0; j<N; j++){
                if(matrix[i][j]==0){ ///遇到0，標註 left[i] & up[j]
                    up[j] = 1; ///for(int ii=0; ii<M; ii++) matrix[ii][j]=0;
                    left[i] = 1; ///for(int jj=0; jj<N; jj++) matrix[i][jj]=0;
                }
            }
        }
        for(int i=0; i<M; i++){ ///最後把它->0
            if(left[i]==1) for(int jj=0; jj<N; jj++) matrix[i][jj]=0; /// if 左邊還有 勾勾 ， 整條刪掉
        }
        for(int j=0; j<N; j++){
            if(up[j]==1) for(int ii=0; ii<M; ii++) matrix[ii][j]=0; /// if 上面還有 勾勾 ， 整條刪掉
        }
    }
};
