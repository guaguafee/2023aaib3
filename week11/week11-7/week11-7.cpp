///week11-7.cpp
///LearningPlan Basic no.9
///LeetCode 1502. Can Make Arithmetic Progression From Squence
class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(), arr.end()); /// �p -> �j �Ʀn
        int N = arr.size(); /// �@�� N �Ӽ�
        for(int i=0; i<N-2; i++){ ///for �j��A�n-2�A �]���U���� i+2
            if(arr[i]-arr[i+1] != arr[i+1]-arr[i+2]) return false;
        }
        return true;
    }
};
