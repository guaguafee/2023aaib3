///week08-3b.cpp
///LearningPlan matrix ��4�D
///��ı�g�X�Ӫ����� is wrong because of 0��������A0�Ӧh�F
///FIN ver.
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int M = matrix.size(), N = matrix[0].size();
        vector<int> up(N); ///�ŧi�@�}�C�A��b�W��up�A�Ψӥ��Ĥļе� �����X�����n�R
        vector<int> left(M);///�ŧi�@�}�C�A��b����left�A�Ψӥ��Ĥļе� �����X����n�R
        for(int i=0; i<M; i++){
            for(int j=0; j<N; j++){
                if(matrix[i][j]==0){ ///�J��0�A�е� left[i] & up[j]
                    up[j] = 1; ///for(int ii=0; ii<M; ii++) matrix[ii][j]=0;
                    left[i] = 1; ///for(int jj=0; jj<N; jj++) matrix[i][jj]=0;
                }
            }
        }
        for(int i=0; i<M; i++){ ///�̫�⥦->0
            if(left[i]==1) for(int jj=0; jj<N; jj++) matrix[i][jj]=0; /// if �����٦� �Ĥ� �A ����R��
        }
        for(int j=0; j<N; j++){
            if(up[j]==1) for(int ii=0; ii<M; ii++) matrix[ii][j]=0; /// if �W���٦� �Ĥ� �A ����R��
        }
    }
};
