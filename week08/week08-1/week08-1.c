///week08-1.c
///LearningPlan matrix 第1題 找到最有錢的人
///LeetCode 1672.Richest Customer Wealth
int maximumWealth(int** accounts, int accountsSize, int* accountsColSize) {
    int ans=0;
        for(int i=0; i<accountsSize; i++){
            int temp=0;
            for(int j=0; j<accountsColSize[i]; j++){
                temp += accounts[i][j];
            }
            if(temp>ans) ans = temp;
        }
        return ans;
}
