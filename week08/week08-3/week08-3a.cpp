///week08-3a.cpp
///LearningPlan matrix ��4�D
///��ı�g�X�Ӫ����� is wrong because of 0��������A0�Ӧh�F
///wrong ver.
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int M = matrix.size(), n = matrix[0].size();
        for(int i=0; i<M; i++){
            for(int i=0; j<N; j++){
                if(matrix[i][j]==0){
                    for(int ii=0; ii<M; ii++) matrix[ii][j]=0;
                    for(int jj=0; jj<N; jj++) matrix[i][jj]=0;
                }
            }
        }
    }
};
