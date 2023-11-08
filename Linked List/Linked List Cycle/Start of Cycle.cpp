/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* slow = head,* fast = head;

        while(fast && fast->next)
        {
            slow = slow->next;
            fast = fast->next->next;

            if(slow == fast) break;
        }
        if(!fast || !fast->next) return nullptr;

        ListNode* start= head;
        while(start != fast)//etiher slow or fat
        {
            start=start->next;
            fast=fast->next;
        }

        return start;
    }
};
