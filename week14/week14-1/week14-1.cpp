/// week14-1.cpp [1/2]
/// LearningPlan ----- Linked List No.3
/// LeetCode 2. Add Two Numbers
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode * ans = new ListNode();
        ListNode * now = ans; /// �ҥ�e2�g���g�k
        while(l1 != nullptr){ /// �u�w��䤤�@�� list 1
            now -> next = new ListNode(l1 -> val); /// �s��node
            l1 = l1 -> next; /// �U1��
            now = now -> next; /// �U�@��
        }
        return ans -> next; /// ���@�U�n return ans -> next
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
