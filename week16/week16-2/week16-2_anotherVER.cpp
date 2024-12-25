/// week16-2.cpp
/// LearningPlan last Question
/// LeetCode 50. Pow(x, n)
class Solution {
public:
    double myPow(double x, long long int n) {
        if(n==0) return 1; /// 1 * x * x * x * x
        if(n<0){ /// �J�� -n �A�t�t�o���A�P�ɧ� x �ܦ�����
            n = -n;
            x = 1/x;
        }

        double now = myPow(x, n/2); /// �@�b�� x �ۭ�
        if(n%2==0) return now * now; /// ���@�b�A�k�@�b�A�ۭ�
        else return now * now * x;
    }
};
