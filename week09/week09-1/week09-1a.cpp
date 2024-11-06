///week09-1a.cpp(��week08-5)
///LearningPlan matrix ��3�D
///LeetCode 54. Spiral Matrix
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int M = matrix.size();
        int N = matrix[0].size();
        int i = 0, j = 0, dir = 0;
        /// dir��V : 0�k �A 1�U �A 2�� �A 3�W

        int dI[4] = {0,1,0,-1}; /// �������ʪ��ȡA��i���W���
        int dJ[4] = {1,0,-1,0}; /// ���k���ʪ��ȡA�kj���W���
        vector<int> ans;
        ans.push_back(matrix[i][j]); ///�⵪�ש�Jans
        i += dI[dir]; /// ���ʪ���
        j += dJ[dir]; /// ���ʪ���
        ans.push_back(matrix[i][j]); /// �⵪�ש�Jans
        i += dI[dir]; /// ���ʪ���
        j += dJ[dir]; /// ���ʪ���
        ans.push_back(matrix[i][j]); /// �⵪�ש�Jans
        ///�o�ӵ{�����|��V
        return ans;
    }
};
