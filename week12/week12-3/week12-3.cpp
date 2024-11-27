///week12-3.cpp
///LeetCode 21. Merge Two Sorted Lists
class Solution {
public: /// *代表指標，用以瞄準 把心
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* ans = new ListNode(); /// 空包彈
        ListNode* now = ans; /// 答案放在 now 裡面
        while(list1 != nullptr || list2 != nullptr){ /// 任一邊還有資料，continute
            if(list1 == nullptr){ /// 有一個是空的
                now -> next = list2; /// 另一個全上
                list2 = nullptr; ///清空
            } else if(list2 == nullptr) { /// 有一個是空的
                now -> next = list1; /// 另一個全上
                list1 = nullptr; ///清空
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
