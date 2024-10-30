///week08-1.cpp
///LearningPlan matrix 第1題 找到最有錢的人
///LeetCode 1672.Richest Customer Wealth
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) { ///最有錢的人，有多少錢?
        int ans=0; ///迴圈前面 ans 是 0
        for(auto a : accounts){ ///從一堆人，挑出一人a
            int sum = 0; ///迴圈前面 sum 是 0
            for(auto b : a){ ///a[0] + a[1] + a[2] + ......
                sum += b; ///迴圈中間 sum+=b 越加越多
            } /// 迴圈後面 看這人的存款總數，是否更有錢
            if(sum>ans) ans = sum; ///更有錢 更新ans
        }
        return ans; ///迴圈後面 ans 拿來用
    }
};
