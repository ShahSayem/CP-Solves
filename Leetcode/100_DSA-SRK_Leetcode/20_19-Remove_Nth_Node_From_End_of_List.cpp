class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp = head;
        ListNode* tail = head;
        int cnt = 0, target;
        while (temp != NULL){
            temp = temp->next;
            cnt++;
        }
        
        target = cnt - n;
        
        temp = head;
        for (int i = 0; i < target; i++){
            tail = temp;
            temp = temp->next;
        }
        
        tail->next = temp->next;
        
        if (target == 0){
            head = head->next;
        }
        
        return head;
    }
};