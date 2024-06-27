/**
    * Definition for singly-linked list.
    * struct ListNode {
    * int val;
    * ListNode *next;
    * ListNode() : val(0), next(nullptr) {}
    * ListNode(int x) : val(x), next(nullptr) {}
    * ListNode(int x, ListNode *next) : val(x), next(next) {}
* };
*/
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        // pre -> A -> B -> C -> D -> null
        // pre -> B (pre->next = pre->next->next)
        // A -> C (A->next = A->next->next)
        // B -> A (B->next = A):
        // (B -> A -> C -> D -> null)
        ListNode* pre = new ListNode(0, head);
        ListNode* cur = pre;
        while (cur->next && cur->next->next) {
            ListNode* tmp = cur->next;
            cur->next = cur->next->next;
            tmp->next = tmp->next->next;
            cur->next->next = tmp;
            cur = tmp;
        }
        return pre->next;
    }
};