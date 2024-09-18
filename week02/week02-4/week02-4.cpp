///week02-4.cpp
///LeetCode 389. Find the Difference (EASY)
///����s �k��t ��X���k���P �h�X�Ӫ����Ӧr�� (�ǲ߭p�e��2�D)
class Solution {
public:
    char findTheDifference(string s, string t) {
        int H[256] = {}; ///�}�C�W�j�A���]��0
        for(char c : s){ ///�w�索�䪺�r��s �̭����C�Ӧrc
            H[c]++; ///��Histogram�έp�ϸ��H[c] �[1 �h1��
        }
        for(char c : t){ ///�w��k�䪺�r��s �̭����C�Ӧrc
            H[c]--; ///�α����֭p������ H[c]++;
            if(H[c]<0) return c; ///������F
        }
        return 0;
    }
};
