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
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* result = new ListNode();
        ListNode* ptr = result;
        while(list1 != nullptr && list2 != nullptr) {
            if(list1->val <= list2->val) {
                ptr->next = list1;
                list1 = list1->next;
            }
            else {
                ptr->next = list2;
                list2 = list2->next;
            }
            ptr = ptr ->next;
        }
        if (list1 != nullptr) {
            ptr->next = list1;
        } else if (list2 != nullptr) {
            ptr->next = list2;
        }
        return result->next;
    }
};