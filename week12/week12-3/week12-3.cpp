///week12-3.cpp
///LeetCode 21. Merge Two Sorted Lists
class Solution {
public: /// *�N����СA�ΥH�˷� ���
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* ans = new ListNode(); /// �ť]�u
        ListNode* now = ans; /// ���ש�b now �̭�
        while(list1 != nullptr || list2 != nullptr){ /// ���@���٦���ơAcontinute
            if(list1 == nullptr){ /// ���@�ӬO�Ū�
                now -> next = list2; /// �t�@�ӥ��W
                list2 = nullptr; ///�M��
            } else if(list2 == nullptr) { /// ���@�ӬO�Ū�
                now -> next = list1; /// �t�@�ӥ��W
                list1 = nullptr; ///�M��
            } else if(list1 -> val < list2 -> val){ ///list1 is smaller
                now -> next = new ListNode(list1->val); ///smaller
                list1 = list1 -> next; /// list1 change to next
                now = now -> next; /// now change to next
            }else{ /// list2 is smaller
                now -> next = new ListNode(list2->val); /// smaller
                list2 = list2 -> next; /// list2 change to next
                now = now -> next; /// now change to next
            }
        }
        return ans->next;
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
