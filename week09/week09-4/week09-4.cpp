/// week09-4.cpp
/// LearningPlan Math 第3題
/// LeetCode 860. Lemomade Change
class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int b5 = 0, b10 = 0, b20 = 0; /// 一開始的鈔票0張
        for(int b : bills){
            if(b==5) b5++; /// 客人拿5元鈔 直接收起來
            else if(b==10){ /// 客人拿10元鈔 看看能不能找
                if(b5==0) return false; /// 沒錢可找
                b10++; /// 多了一張10元鈔
                b5--; /// 少了一張5元鈔
            }else{ /// 客人拿20元 找他1張10 1張5
                if(b10>0 && b5>0){
                    b20++;
                    b10--;
                    b5--;
                }else if(b5>=3){
                    b20++;
                    b5-=3;
                }else return false; /// 沒法找
            }
        }
        return true;
    }
};
