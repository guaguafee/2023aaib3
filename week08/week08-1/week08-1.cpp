///week08-1.cpp
///LearningPlan matrix ��1�D ���̦������H
///LeetCode 1672.Richest Customer Wealth
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) { ///�̦������H�A���h�ֿ�?
        int ans=0; ///�j��e�� ans �O 0
        for(auto a : accounts){ ///�q�@��H�A�D�X�@�Ha
            int sum = 0; ///�j��e�� sum �O 0
            for(auto b : a){ ///a[0] + a[1] + a[2] + ......
                sum += b; ///�j�餤�� sum+=b �V�[�V�h
            } /// �j��᭱ �ݳo�H���s���`�ơA�O�_�󦳿�
            if(sum>ans) ans = sum; ///�󦳿� ��sans
        }
        return ans; ///�j��᭱ ans ���ӥ�
    }
};
