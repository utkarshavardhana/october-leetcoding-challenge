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
        ListNode* fast = head, *slow = head;
        int hops = 0, cycle = 0;
        while(fast and fast->next) {
            slow = slow->next;
            fast = fast->next->next;
            if(fast == slow) {
                cycle++;
                break;
            }
        }
        slow = head;
        if(cycle)
        while(fast and slow and fast != slow) {
            fast = fast->next;
            slow = slow->next;
        }
        return cycle ? slow : NULL;
    }
};
