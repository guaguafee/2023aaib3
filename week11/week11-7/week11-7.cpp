///week11-7.cpp
///LearningPlan Basic no.9
///LeetCode 1502. Can Make Arithmetic Progression From Squence
class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(), arr.end()); /// 小 -> 大 排好
        int N = arr.size(); /// 共有 N 個數
        for(int i=0; i<N-2; i++){ ///for 迴圈，要-2， 因為下面有 i+2
            if(arr[i]-arr[i+1] != arr[i+1]-arr[i+2]) return false;
        }
        return true;
    }
};
