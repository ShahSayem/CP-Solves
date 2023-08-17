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
        priority_queue <pair<int,ListNode*>> q;
        for (int i = 0; i < lists.size(); i++){
            if (lists[i] != NULL)
                q.push({-lists[i]->val, lists[i]});
        }

        ListNode *head = NULL, *tail = NULL, *temp = NULL;
        head = new ListNode(-1);
        tail = head;
        while (!q.empty()){
            temp = q.top().second;
            tail->next = temp;
            tail = temp;
            q.pop();

            if (temp->next != NULL)
                q.push({-temp->next->val, temp->next});
        }
        return head->next;
    }
};