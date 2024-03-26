#include <bits/stdc++.h>
using namespace std;

struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* removeZeroSumSublists(ListNode* head) {
        int currSum = 0, x;
        ListNode* temp = new ListNode(0);
        temp->next = head;

        ListNode* curr = temp;
        map <int, ListNode*> preSum;
        while(curr != NULL){
            currSum += curr->val;
            if (preSum[currSum]){
                ListNode* prev = preSum[currSum];
                ListNode* remNode = prev->next;
                
                x = currSum;
                if (remNode)
                    x += remNode->val;

                while (x != currSum){
                    preSum.erase(x);
                    remNode = remNode->next;

                    if (remNode)
                        x += remNode->val;
                }
                prev->next = curr->next;
            }
            else {
                preSum[currSum] = curr;
            }

            curr = curr->next;
        }

        return temp->next;
    }
};