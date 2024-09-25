/// 459.Repeated Substring Pattern
/// week03-5.cpp 學習計畫第5題
///此字串是由重複的字串組合而成
class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string s2 = s + s;
        int N = s2.length();
        return s2.substr(1, N-2).find(s) != string::npos; //沒有這個位置，很大很大
    }
};
