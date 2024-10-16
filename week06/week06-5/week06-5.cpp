///week06-5.cpp
///LeetCode 1078. Occurences After Bigram
///����1�Ӧr ���ۧ��2�� �A�ӴN�O�ڭ̭n�䪺��3�Ӧr
class Solution {
public:
    vector<string> findOcurrences(string text, string first, string second) {
        vector<string> ans; /// put ans(���Y�ۦp���}�C)�A�Ϊ��n return �@��

        stringstream ss(text);

        string word1, word2, word3; ///��1 ��2 ��3�Ӧr
        ss >> word1; /// like the way "cin << word1",Ū���
        ss >> word2;
        while(ss >> word3){
            if(word1==first && word2==second) ans.push_back(word3); /// put ans
            word1 = word2;
            word2 = word3;
        }

        return ans;

    }
};
