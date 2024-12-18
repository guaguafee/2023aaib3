/// week15-3.cpp
/// LearningPlan Linked List No.4
/// 445. Add Two Numbers
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        return myReverse(l1);
    }
    ListNode* myReverse(ListNode* l1){
        vector<int> a; /// �̭��|��@��Ʀr
        while(l1 != nullptr){ /// �@����A���쵲��
            a.push_back(l1 -> val); ///��
            l1 = l1 -> next; /// �U�@��
        }

        ListNode * ans = new ListNode();
        ListNode * now = ans;
        int N = a.size();
        for(int i=N-1; i>=0; i--){
            now -> next = new ListNode(a[i]);
            now = now -> next;
        }
        return ans -> next;
    }
};
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
