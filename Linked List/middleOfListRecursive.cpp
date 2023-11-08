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
    ListNode* findMiddle(ListNode* mid, ListNode* temp)
    {
        if(!temp || !temp->next) return mid;
        return findMiddle(mid->next, temp->next->next);
    }
    ListNode* middleNode(ListNode* head) {
        return findMiddle(head, head);
    }
};
