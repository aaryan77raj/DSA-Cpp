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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int> v;
        for (auto& l : lists) {
            vector<int>tmp = ListNode2vector(l);
            v.insert(v.begin(), tmp.begin(), tmp.end());
        }
        sort(v.begin(), v.end());
        return vector2ListNode(v);
    }
    vector<int> ListNode2vector(ListNode * list) {
        vector<int> v;
        for (; list != nullptr; list = list->next)
            v.push_back(list->val);
        return v;
    }
    ListNode * vector2ListNode(vector<int>& v) {
        ListNode *pre = new ListNode(0), *cur = pre;
        for (auto& n : v) {
            cur->next = new ListNode(n);
            cur = cur->next;
        }
        return pre->next;
    }
};