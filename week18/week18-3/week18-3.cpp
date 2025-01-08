/// week18-3.cpp
/// LearningPlan Math No. 6
/// LeetCode 67. Add Binary
class Solution {
public:
    string addBinary(string a, string b) {
        int carry = 0;
        int i = a.length()-1, j = b.length()-1;
        vector<int> ans;
        while( i>=0 || j>=0 ){
            if(j<0){ /// 右邊不夠長，左邊加
                int now = a[i]-'0' + carry;
                ans.push_back(now % 2);
                carry = now/2;
            }else if(i<0){ /// 左邊不夠長，右邊加
                int now = b[j]-'0' + carry;
                ans.push_back(now % 2);
                carry = now/2;
            }else{ /// 兩邊都長，兩邊都加
                int now = a[i]-'0' + b[j]-'0' + carry;
                ans.push_back(now % 2);
                carry = now/2;
            }
            i--; /// 換下一位
            j--; /// 換下一位
        }
        if( carry>0 )ans.push_back(carry); /// 最高位，有進位
        int N = ans.size();
        string ans2(N, '0');
        for(int i=0; i<N; i++){
            ans2[i] = ans[N-1-i] + '0';
        }
        return ans2;
    }
};
