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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* first = head;
        ListNode* second = head;
        for (int i = 0; i < n; i++) {
            second = second->next;
        }
        if (second == nullptr) {
            ListNode* temp = head;
            head = head->next;
            delete temp;
            return head;
        }
        while (second->next != nullptr) {
            first = first->next;
            second = second->next;
        }
        ListNode* nodeToRemove = first->next;
        first->next = first->next->next;
        delete nodeToRemove;

        return head;
    }
};