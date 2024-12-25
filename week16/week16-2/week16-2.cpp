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
        if(n%2==0){
            double now = myPow(x, n/2); /// �@�b�� x �ۭ�
            return now * now; /// ���@�b�A�k�@�b�A�ۭ�
        }else{
            double now = myPow(x, n/2);
            return now * now * x;
        }

        double ans = 1;
        if(n>0){ /// �κƨg�{�]���g�k�A���O n<0 �|����
            for(int i=0; i<n; i++){
                ans *= x;
            }
        }else if(n<0){ /// �S�O�w�� n<0 �t�t�o��
            for(int i=0; i<-n; i++){
                ans *= 1/x;
            }
        }
        return ans;
    }
};
