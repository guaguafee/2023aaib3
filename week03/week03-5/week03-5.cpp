/// 459.Repeated Substring Pattern
/// week03-5.cpp �ǲ߭p�e��5�D
///���r��O�ѭ��ƪ��r��զX�Ӧ�
class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string s2 = s + s;
        int N = s2.length();
        return s2.substr(1, N-2).find(s) != string::npos; //�S���o�Ӧ�m�A�ܤj�ܤj
    }
};
