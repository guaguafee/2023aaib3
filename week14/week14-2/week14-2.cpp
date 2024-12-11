/// week14-3.cpp [2/2]
/// LearningPlan ----- Linked List No.3
/// LeetCode 2. Add Two Numbers
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode * ans = new ListNode();
        ListNode * now = ans; /// 模仿前2週的寫法
        int carry = 0; /// 進位的小數字
        while(l1 != nullptr || l2 != nullptr){ /// 只針對其中一個 list

            if(l1 == nullptr){ /// if l1 is null, remove l1

                int here = l2 -> val + carry; /// remain l2
                now -> next = new ListNode(here%10); /// 新建node
                carry = here / 10;
                l2 = l2 -> next; /// remain l2
                now = now -> next; /// 下一筆

            }else if(l2 == nullptr){ /// if l2 is null, remove l2

                int here = l1 -> val + carry; /// remain l1
                now -> next = new ListNode(here%10); /// 新建node
                carry = here / 10;
                l1 = l1 -> next; /// remainl1
                now = now -> next; /// 下一筆

            }else{ /// perfect

                int here = l1 -> val + l2 -> val + carry;
                now -> next = new ListNode(here%10); /// 新建node
                carry = here / 10;
                l1 = l1 -> next; /// 下一筆
                l2 = l2 -> next; /// 下一筆
                now = now -> next; /// 下一筆
            }
        }
        if(carry==1) now -> next = new ListNode(carry);
        return ans -> next; /// 等一下要 return ans -> next
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
