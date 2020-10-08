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
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head)   return NULL;
        int n = 0;
        ListNode* node = head, *fh = new ListNode(0), *sh = new ListNode(0), *st = sh;
        while(node) {
            n++;
            node = node->next;
        }
        node = head;
        k %= n;
        n -= k;
        while(n--) {
            st->next = new ListNode(node->val);
            st = st->next;
            node = node->next;
        }
        if(node)    fh->next = node;
        else    return sh->next;
        ListNode* temp = fh->next;
        while(temp) {
            if(!temp->next) {
                temp->next = sh->next;
                break;
            }
            temp = temp->next;
        }
        return fh->next;
    }
};
