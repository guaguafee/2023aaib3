/// week16-2.cpp
/// LearningPlan last Question
/// LeetCode 50. Pow(x, n)
class Solution {
public:
    double myPow(double x, long long int n) {
        if(n==0) return 1; /// 1 * x * x * x * x
        if(n<0){ /// 遇到 -n ，負負得正，同時把 x 變成分母
            n = -n;
            x = 1/x;
        }
        if(n%2==0){
            double now = myPow(x, n/2); /// 一半的 x 相乘
            return now * now; /// 左一半，右一半，相乘
        }else{
            double now = myPow(x, n/2);
            return now * now * x;
        }

        double ans = 1;
        if(n>0){ /// 用瘋狂程設的寫法，但是 n<0 會失敗
            for(int i=0; i<n; i++){
                ans *= x;
            }
        }else if(n<0){ /// 特別針對 n<0 負負得正
            for(int i=0; i<-n; i++){
                ans *= 1/x;
            }
        }
        return ans;
    }
};
