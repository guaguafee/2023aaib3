/// week08-2.cpp
///LearningPlan matrix ��2�D
///LeetCode 1572.Matrix Diagonal Sum �﨤�u���Ʀr�[�_��
int diagonalSum(int** mat, int matSize, int* matColSize) {
    int ans = 0;
        int N = matSize;
        for(int i=0; i<N; i++){
            ans += mat[i][i]; /// ���W�k�U i, i
            ans += mat[i][N-1-i]; ///���U�k�W i(��), N-1-i(��)
        }
        if(N%2==1) ans -= mat[N/2][N/2]; ///�_�� : ���������ƥΤF2���A�n����
        return ans;
}
