///week12-2.cpp
///LeetCode 21. Merge Two Sorted Lists
class Solution {
public: /// *�N����СA�ΥH�˷� ���
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        /// ListNode* ans = list1; /// �i�౵(�ª�)list1 �L�h
        ///ListNode* ans = new ListNode(99); /// �]�i�H�}�s��(��99)
        ListNode* ans = new ListNode(99, new ListNode(90)); /// �}�s��Node ��99�A�᭱�౵ �s��Node�̦�90
        return ans;
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
