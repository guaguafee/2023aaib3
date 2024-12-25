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

        double now = myPow(x, n/2); /// 一半的 x 相乘
        if(n%2==0) return now * now; /// 左一半，右一半，相乘
        else return now * now * x;
    }
};
