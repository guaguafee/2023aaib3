///week06-4.cpp
///厩策璸礶 Simulation 材1肈
///LeetCode 682. Baseball Game
class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> a;
        for(string s : operations){
            int N = a.size(); /// aΤN计
            if(s=="+") a.push_back( a[N-1]+a[N-2] ); ///程2ゑ
            else if(s=="D") a.push_back( a[N-1]*2 ); ///程1掸2
            else if(s=="C") a.pop_back(); ///奔
            else a.push_back( stoi(s) ); ///计
        }
        int ans = 0; ///р柑场癬ㄓ
        for(int b : a) ans += b;
        return ans;
    }
};
