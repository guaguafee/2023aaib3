///LeetCode 2220. Minimum Bit Flips to Convert Number
///使用大一教過的剝皮法，再左右對比，不同就ans++

class Solution {
public:
    int minBitFlips(int start, int goal) {
        int ans = 0; ///迴圈前 ans = 0
        while(start>0){
            cout << start%2;
            start /= 2;
        }
        return ans;
    }
};
