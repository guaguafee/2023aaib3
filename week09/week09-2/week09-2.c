/// week09-2.cpp
/// LeetCode 1523. Count Odd Numbers in an Interval Range
/// To Find How many Odds that is contained between low & high
class Solution {
public:
    int countOdds(int low, int high) {
        int ans = (high-low)/2; //這個方法會錯
        if(low%2==1 || high%2==1) ans++; //頭尾都是奇數 就+1
        return ans;
    }
};
