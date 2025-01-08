# week18-2.py
# LearningPlan Matrix No.3
# LeetCode 54. Spiral Matrix
class Solution:
    def spiralOrder(self, matrix: List[List[int]]) -> List[int]:
        M, N = len(matrix), len(matrix[0])
        i, j = 0, 0
        di = [0, 1, 0, -1] # 每次i移動的量
        dj = [1, 0, -1, 0] # 每次j移動的量
        d = 0 # 移動的方向，對應 di[d] dj[d]
        ans = []
        while len(ans) < M*N: # 尚未收齊12個答案
            ans.append(matrix[i][j])
            matrix[i][j] = 999 # 999 代表已走過
            i2, j2 = i + di[d], j + dj[d] # 下一格
            if i2 >= M or j2 >= N or i2 < 0 or j2 < 0 or matrix[i2][j2]==999: # 撞到邊界 or 走過
                d = (d+1)%4 # 轉彎
                i2, j2 = i + di[d], j + dj[d] #
            i, j = i2, j2 #
        return ans
