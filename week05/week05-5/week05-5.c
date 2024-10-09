/// WEEK 05-5.cpp
/// LeetCode 28.Length of last word
class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream ss(s); /// 可將字串string 變成cin 的iostream
        string word;
        while( ss >> word ){ /// 一直讀，讀完才離開
            /// 大括號裡，什麼都不做
        }
        return word.length(); ///
    }
};
