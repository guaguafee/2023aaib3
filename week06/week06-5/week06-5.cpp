///week06-5.cpp
///LeetCode 1078. Occurences After Bigram
///找到第1個字 接著找第2個 再來就是我們要找的第3個字
class Solution {
public:
    vector<string> findOcurrences(string text, string first, string second) {
        vector<string> ans; /// put ans(伸縮自如的陣列)，形狀要 return 一樣

        stringstream ss(text);

        string word1, word2, word3; ///第1 第2 第3個字
        ss >> word1; /// like the way "cin << word1",讀資料
        ss >> word2;
        while(ss >> word3){
            if(word1==first && word2==second) ans.push_back(word3); /// put ans
            word1 = word2;
            word2 = word3;
        }

        return ans;

    }
};
