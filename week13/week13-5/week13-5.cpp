/// week13-5.cpp
/// LeetCode 21. Merge Two Sorted Lists
///LearningPlan Linked List No.1
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode * ans = new ListNode(); /// prepare new ListNode()
        ListNode * now = ans; /// what is going to deal with ListNode now is let ans going down
        while(list1 != nullptr || list2 != nullptr){ /// �u�n1���٦���
            if(list1 == nullptr){ /// list1�O�Ū�
                now -> next = list2; /// ���Wlist2
                list2 = nullptr; /// list2�]�M��

            } else if(list2 == nullptr) { /// list2�O�Ū�
                now -> next = list1; /// ���Wlist1
                list1 = nullptr; /// list1�]�M��

            }else{ /// list2 is smaller
                if(list1 -> val < list2 -> val){ ///list1 is smaller
                    now -> next = new ListNode(list1->val); ///smaller
                    list1 = list1 -> next; /// list1 change to next
                }else{
                    now -> next = new ListNode(list2->val); /// smaller
                    list2 = list2 -> next; /// list2 change to next
                }
                now = now -> next;
            }
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
