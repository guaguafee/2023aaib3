/// week09-2.cpp
/// LeetCode 1523. Count Odd Numbers in an Interval Range
/// To Find How many Odds that is contained between low & high
class Solution {
public:
    int countOdds(int low, int high) {
        int ans = (high-low)/2; //�o�Ӥ�k�|��
        if(low%2==1 || high%2==1) ans++; //�Y�����O�_�� �N+1
        return ans;
    }
};
