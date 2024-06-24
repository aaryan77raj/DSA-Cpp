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
        
        // Move fast n steps ahead
        for (int i = 0; i < n; ++i) {
            if (fast->next != nullptr) {
                fast = fast->next;
            } else {
                return head; // If n is greater than the length of the list
            }
        }

        // Move both fast and slow until fast reaches the end
        while (fast->next != nullptr) {
            fast = fast->next;
            slow = slow->next;
        }
        
        // Remove the nth node from end
        slow->next = slow->next->next;
        
        // Return the head of the modified list
        ListNode* result = pre->next;
        delete pre;
        return result;
    }
};
