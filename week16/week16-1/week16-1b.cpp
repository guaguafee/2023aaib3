/// week16-1b.cpp
/// LearningPlan last Question
/// LeetCode 50. Pow(x, n)
class Solution {
public:
    double myPow(double x, int n) {
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
