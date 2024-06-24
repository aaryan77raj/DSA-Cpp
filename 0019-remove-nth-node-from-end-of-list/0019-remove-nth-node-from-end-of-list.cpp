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
        ListNode *pre = new ListNode(0, head), *slow = pre, *fast = pre;
        
           for (int i = 0; i < n; ++i) {
            if (fast->next != nullptr) {
                fast = fast->next;
            } else {
                return head; // If n is greater than the length of the list
            }
        }

               while (fast->next != nullptr) {
            fast = fast->next;
            slow = slow->next;
        }
       
        slow->next = slow->next->next;
        
        ListNode* result = pre->next;
        delete pre;
        return result;
    }
};
