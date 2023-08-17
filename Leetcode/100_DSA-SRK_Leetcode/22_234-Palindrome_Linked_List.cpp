class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode* temp = head;
        
        string str, check;
        while (temp != NULL){
            str += to_string(temp->val);
            
            temp = temp->next;
        }
        check = str;
        reverse(str.begin(), str.end());
        
        if(str == check)
            return true;
        else 
            return false;
        
    }
};